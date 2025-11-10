/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commaSep = (rule) =>
  optional(seq(rule, repeat(seq(",", rule)), optional(",")));

module.exports = grammar({
  name: "flatbuffers",

  extras: ($) => [$.comment, /\s/],

  rules: {
    schema: ($) =>
      repeat(
        choice(
          $.include,
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
    root_type: ($) => seq("root_type", field("type", $._type_ident), ";"),

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
            seq("=", choice($._single_value, $._type_ident, $.vector_constant)),
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
        optional($.metadata), // Enums can have metadata too
      ),

    union_field: ($) =>
      seq(
        optional(seq(field("alias", $.ident), ":")),
        field("type", $._type_ident),
      ),

    rpc_method: ($) =>
      seq(
        field("name", $.ident),
        "(",
        field("request", $._type_ident),
        ")",
        ":",
        field("response", $._type_ident),
        optional($.metadata),
        ";",
      ),

    // Type System
    _type_reference: ($) => choice($.scalar_type, $._type_ident),

    _type: ($) =>
      choice(
        // alias($._type_reference, $.scalar_type), // TODO: needed?
        $._type_reference,
        $.vector_type,
        $.array_type,
      ),

    // TODO: Could this handle scalar_type better?
    vector_type: ($) => seq("[", field("element", $._type_reference), "]"),

    array_type: ($) =>
      seq(
        "[",
        field("element", $._type_reference),
        ":",
        field("size", $.integer_constant),
        "]",
      ),

    scalar_type: ($) =>
      choice(
        "bool",
        "byte",
        "ubyte",
        "short",
        "ushort",
        "int",
        "uint",
        "float",
        "long",
        "ulong",
        "double",
        "int8",
        "uint8",
        "int16",
        "uint16",
        "int32",
        "uint32",
        "int64",
        "uint64",
        "float32",
        "float64",
        "string",
      ),

    // Metadata
    metadata: ($) => seq("(", commaSep($.attribute), ")"),

    attribute: ($) =>
      seq(
        field("name", $.ident),
        optional(seq(":", field("value", $._single_value))),
      ),

    // Values and Constants
    _scalar: ($) =>
      choice($.boolean_constant, $.integer_constant, $.float_constant),
    _single_value: ($) => choice($._scalar, $.string_constant),
    value: ($) => choice($._single_value, $.json_object, $.json_array),
    vector_constant: ($) => "[]",

    // JSON support
    json_object: ($) => seq("{", commaSep($._object_field), "}"),
    _object_field: ($) =>
      seq(field("key", choice($.ident, $.string_constant)), ":", $.value),
    json_array: ($) => seq("[", commaSep($.value), "]"),

    // Terminals
    ident: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _dot_scope_resolution: ($) =>
      prec(1, seq(field("scope", choice($.ident, $.qualified_ident)), ".")),

    qualified_ident: ($) =>
      seq(
        $._dot_scope_resolution,
        field("name", choice($.qualified_ident, $.ident)),
      ),

    // Helper: any place that accepts a type name can take either a single
    // ident or a qualified_ident.
    _type_ident: ($) => choice($.qualified_ident, $.ident),

    string_constant: ($) => /("[^"]*?"|'[^']*?')/,
    integer_constant: ($) => choice(/[-+]?[0-9]+/, /[-+]?0[xX][0-9a-fA-F]+/),
    float_constant: ($) =>
      choice(
        /[-+]?(([.][0-9]+)|([0-9]+[.][0-9]*)|([0-9]+))([eE][-+]?[0-9]+)?/,
        /[-+]?0[xX](([.][0-9a-fA-F]+)|([0-9a-fA-F]+[.][0-9a-fA-F]*)|([0-9a-fA-F]+))([pP][-+]?[0-9]+)/,
        token(prec(1, /[-+]?(nan|inf|infinity)/)),
      ),
    boolean_constant: ($) => choice("true", "false"),

    comment: ($) =>
      choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
