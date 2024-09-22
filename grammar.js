/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Based on https://flatbuffers.dev/flatbuffers_grammar.html
module.exports = grammar({
  name: "flatbuffers",

  rules: {
    schema: ($) =>
      repeat(
        choice(
          $.comment,
          $.include,
          $.namespace,
          $.attribute,
          $.table_struct,
          $.enum_union,
          $.rpc_service,
          $.root_type,
          $.file_extension,
          $.file_identifier,
          $.object,
        ),
      ),

    // include
    include: ($) => seq("include", $.string_constant, ";"),

    // namespace_decl
    namespace: ($) =>
      seq(
        "namespace",
        field("name", seq($.ident, repeat(seq(".", $.ident)))),
        ";",
      ),

    // attribute_decl
    attribute: ($) =>
      seq(
        "attribute",
        field("name", choice($.ident, seq('"', $.ident, '"'))),
        ";",
      ),

    // type_decl
    table_struct: ($) =>
      seq(
        choice("table", "struct"),
        field("name", $.ident),
        optional($.metadata),
        "{",
        repeat(choice($.table_field, $.comment)),
        "}",
      ),

    // field_decl
    table_field: ($) =>
      seq(
        field("name", $.ident),
        ":",
        $.type,
        optional(
          field("default", seq("=", choice($.scalar, $.enum_field_name))),
        ),
        optional($.metadata),
        optional($.comment),
        ";",
      ),

    // enum_decl
    enum_union: ($) =>
      seq(
        choice(seq("enum", $.ident, ":", $.type), seq("union", $.ident)),
        optional($.metadata),
        "{",
        optional(
          seq(
            repeat(seq(optional(","), choice($.comment, $.enum_field))), // TODO: leading comma is technically wrong
            optional(","),
          ),
        ),
        "}",
      ),

    // enumval_decl
    enum_field: ($) =>
      seq($.enum_field_name, optional(seq("=", $.integer_constant))),

    enum_field_name: ($) => $.ident,

    // root_decl
    root_type: ($) => seq("root_type", field("name", $.ident), ";"),

    // rpc_decl
    rpc_service: ($) =>
      seq(
        "rpc_service",
        field("name", $.ident),
        "{",
        repeat1($.rpc_method),
        "}",
      ),

    rpc_method: ($) =>
      seq(
        field("name", $.ident),
        "(",
        $.ident,
        ")",
        ":",
        $.ident,
        optional($.metadata),
        ";",
      ),

    type: ($) =>
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
        seq("[", $.type, "]"),
        $.ident,
      ),

    metadata: ($) =>
      seq(
        "(",
        optional(
          seq(
            seq($.ident, optional(seq(":", $.single_value))),
            repeat(seq(",", seq($.ident, optional(seq(":", $.single_value))))),
            optional(","),
          ),
        ),
        ")",
      ),

    scalar: ($) =>
      choice($.boolean_constant, $.integer_constant, $.float_constant),

    object: ($) =>
      seq(
        "{",
        optional(
          seq(
            seq($.ident, ":", $.value),
            repeat(seq(",", seq($.ident, ":", $.value))),
            optional(","),
          ),
        ),
        "}",
      ),

    single_value: ($) => choice($.scalar, $.string_constant),

    value: ($) =>
      choice(
        $.single_value,
        $.object,
        seq(
          "[",
          optional(seq($.value, repeat(seq(",", $.value)), optional(","))),
          "]",
        ),
      ),

    // file_extension_decl
    file_extension: ($) => seq("file_extension", $.string_constant, ";"),

    // file_identifier_decl
    file_identifier: ($) => seq("file_identifier", $.string_constant, ";"),

    // ' is undocumented but compiles correctly
    string_constant: ($) => /("[^"]*?"|'[^']*?')/,

    ident: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    integer_constant: ($) => choice(/[-+]?[0-9]+/, /[-+]?0[xX][0-9a-fA-F]+/),

    float_constant: ($) =>
      choice(
        /[-+]?(([.][0-9]+)|([0-9]+[.][0-9]*)|([0-9]+))([eE][-+]?[0-9]+)?/,
        /[-+]?0[xX](([.][0-9a-fA-F]+)|([0-9a-fA-F]+[.][0-9a-fA-F]*)|([0-9a-fA-F]+))([pP][-+]?[0-9]+)/,
        /[-+]?(nan|inf|infinity)/,
      ),

    boolean_constant: ($) => choice("true", "false"),

    comment: ($) =>
      choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
