/**
 * @file Tree-Sitter grammar for FlatBuffers schema files.
 * @author Stephen Panaro
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commaSep = (/** @type {RuleOrLiteral} */ rule) =>
  optional(seq(rule, repeat(seq(",", rule)), optional(",")));

export default grammar({
  name: "flatbuffers",

  extras: ($) => [$.comment, /\s/],
  word: ($) => $.ident,

  rules: {
    schema: ($) =>
      repeat(
        choice(
          $.include, // Relaxation: technically required to come first in the file.
          $.namespace,
          $.custom_attribute,
          $.table,
          $.struct,
          $.enum,
          $.union,
          $.rpc_service,
          $.root_type,
          $.file_extension,
          $.file_identifier,
          $.json_object,
        ),
      ),

    // Declarations
    include: ($) => seq("include", field("path", $.string_constant), ";"),
    namespace: ($) =>
      seq(
        "namespace",
        field("name", seq($.ident, repeat(seq(".", $.ident)))),
        ";",
      ),
    custom_attribute: ($) =>
      seq("attribute", field("name", choice($.ident, $.string_constant)), ";"),
    file_extension: ($) =>
      seq("file_extension", field("name", $.string_constant), ";"),
    file_identifier: ($) =>
      seq("file_identifier", field("name", $.string_constant), ";"),
    root_type: ($) =>
      seq("root_type", field("type", $._custom_type_ident), ";"),

    // Object Declarations
    table: ($) =>
      seq(
        "table",
        field("name", $.ident),
        optional($.metadata),
        "{",
        repeat($.table_field),
        "}",
      ),

    struct: ($) =>
      seq(
        "struct",
        field("name", $.ident),
        optional($.metadata),
        "{",
        repeat($.struct_field),
        "}",
      ),

    enum: ($) =>
      seq(
        "enum",
        field("name", $.ident),
        ":",
        field("type", $._type),
        optional($.metadata),
        "{",
        commaSep($.enum_field),
        "}",
      ),

    union: ($) =>
      seq(
        "union",
        field("name", $.ident),
        optional($.metadata),
        "{",
        commaSep($.union_field),
        "}",
      ),

    rpc_service: ($) =>
      seq(
        "rpc_service",
        field("name", $.ident),
        optional($.metadata), // Not in official grammar, but supported.
        "{",
        repeat1($.rpc_method),
        "}",
      ),

    // Fields and Methods
    table_field: ($) =>
      seq(
        field("name", $.ident),
        ":",
        field("type", $._type),
        optional(
          field(
            "default",
            seq(
              "=",
              choice(
                $._scalar_constant,
                $._custom_type_ident,
                $.vector_constant,
              ),
            ),
          ),
        ),
        optional($.metadata),
        ";",
      ),

    struct_field: ($) =>
      seq(
        field("name", $.ident),
        ":",
        field("type", $._type),
        optional($.metadata),
        ";",
      ),

    enum_field: ($) =>
      seq(
        field("name", $.ident),
        optional(seq("=", field("value", $.integer_constant))),
        optional($.metadata),
      ),

    union_field: ($) =>
      seq(
        optional(seq(field("alias", $.ident), ":")),
        field("type", $._custom_type_ident),
        optional($.metadata),
      ),

    rpc_method: ($) =>
      seq(
        field("name", $.ident),
        "(",
        field("request", $._custom_type_ident),
        ")",
        ":",
        field("response", $._custom_type_ident),
        optional($.metadata),
        ";",
      ),

    // Type System
    _type_reference: ($) => choice($.scalar_type, $._custom_type_ident),

    _type: ($) => choice($._type_reference, $.vector_type, $.array_type),

    vector_type: ($) => seq("[", field("element", $._type_reference), "]"),

    array_type: ($) =>
      seq(
        "[",
        field("element", $._type_reference),
        ":",
        field("size", $.integer_constant),
        "]",
      ),

    scalar_type: (_) =>
      choice(
        "bool",
        "string",
        /u?int(8|16|32|64)?/,
        /u?byte/,
        /u?short/,
        /u?long/,
        /float(32|64)?/,
        "double",
      ),

    // Metadata
    metadata: ($) => seq("(", commaSep($.attribute), ")"),

    attribute: ($) =>
      seq(
        field("name", $.ident),
        optional(seq(":", field("value", $._scalar_constant))),
      ),

    // Constants
    _scalar_constant: ($) =>
      choice(
        $.boolean_constant,
        $.integer_constant,
        $.float_constant,
        $.null_constant,
        $.string_constant,
      ),
    vector_constant: (_) => /\[\s*\]/,

    // JSON (FlexBuffers)
    json_object: ($) => seq("{", commaSep($._object_field), "}"),
    _json_value: ($) => choice($._scalar_constant, $.json_object, $.json_array),
    pair: ($) =>
      seq(
        field("key", choice($.ident, $.string_constant)),
        ":",
        field("value", $._json_value),
      ),
    _object_field: ($) => seq($.pair),
    json_array: ($) => seq("[", commaSep($._json_value), "]"),

    // Terminals
    ident: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Right associate here so that going from a name to it's preceding scope is easy.
    // e.g. in com.foo.bar.Baz, going from bar to com.foo.bar
    qualified_ident: ($) =>
      seq(
        field("scope", choice($.qualified_ident, $.ident)),
        ".",
        field("name", $.ident),
      ),

    _custom_type_ident: ($) => choice($.qualified_ident, $.ident), // user-defined table, enum, etc

    string_constant: (_) =>
      // These are seq so that ' and " are nodes. This allows editors to treat them as brackets.
      choice(seq(`'`, /([^'\\]|\\.)*/, `'`), seq(`"`, /([^"\\]|\\.)*/, `"`)),

    integer_constant: (_) => choice(/[-+]?[0-9]+/, /[-+]?0[xX][0-9a-fA-F]+/),
    float_constant: (_) =>
      choice(
        /[-+]?(([.][0-9]+)|([0-9]+[.][0-9]*)|([0-9]+))([eE][-+]?[0-9]+)?/,
        /[-+]?0[xX](([.][0-9a-fA-F]+)|([0-9a-fA-F]+[.][0-9a-fA-F]*)|([0-9a-fA-F]+))([pP][-+]?[0-9]+)/,
        token(prec(1, /[-+]?(nan|inf|infinity)/)),
      ),
    boolean_constant: (_) => choice("true", "false"),
    null_constant: (_) => "null",

    comment: (_) =>
      choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
