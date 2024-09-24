/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Based on https://flatbuffers.dev/flatbuffers_grammar.html
module.exports = grammar({
  name: "flatbuffers",

  extras: ($) => [$.comment, /\s/],

  rules: {
    schema: ($) =>
      repeat(
        choice(
          $.comment,
          $.include,
          $.namespace,
          $.attribute,
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
      seq("attribute", field("name", choice($.ident, $.string_constant)), ";"),

    // type_decl
    table: ($) =>
      seq(
        "table",
        field("name", $.ident),
        optional($.metadata),
        "{",
        repeat($.table_field),
        "}",
      ),

    // field_decl
    table_field: ($) =>
      seq(
        field("name", $.ident),
        ":",
        choice(
          seq(
            choice(alias($._builtin_type, $.type), $.vector_type),
            optional(
              field(
                "default",
                seq(
                  "=",
                  choice($.string_constant, $._scalar, $.vector_constant),
                ),
              ),
            ),
          ),
          // enum fields
          seq(
            alias($.ident, $.type),
            optional(field("default", seq("=", $._enum_field_name))),
          ),
        ),
        optional($.metadata),
        ";",
      ),

    // type_decl
    // The official grammar combines table and struct but structs can't have default values.
    struct: ($) =>
      seq(
        "struct",
        field("name", $.ident),
        optional($.metadata),
        "{",
        repeat($.struct_field),
        "}",
      ),

    // field_decl
    struct_field: ($) =>
      seq(
        field("name", $.ident),
        ":",
        choice(
          alias($._builtin_type, $.type),
          alias($.ident, $.type),
          $.vector_type,
          $.array_type,
        ),
        optional($.metadata),
        ";",
      ),

    // enum_decl
    enum: ($) =>
      seq(
        "enum",
        $.ident,
        ":",
        $.type,
        optional($.metadata),
        "{",
        repeat(seq($.enum_field, ",")),
        optional($.enum_field),
        "}",
      ),

    // enumval_decl
    enum_field: ($) =>
      seq(
        field("name", $._enum_field_name),
        optional(seq("=", $.integer_constant)),
      ),

    _enum_field_name: ($) => $.ident,

    // enum_decl
    // The official grammar combines enums and unions but unions can't have default values.
    union: ($) =>
      seq(
        "union",
        $.ident,
        optional($.metadata),
        "{",
        repeat(seq($.union_field, ",")),
        optional($.union_field),
        "}",
      ),

    union_field: ($) =>
      choice(
        field("typename", $.ident),
        seq(field("name", $.ident), ":", field("typename", $.ident)),
      ),

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
        field("request", $.ident),
        ")",
        ":",
        field("response", $.ident),
        optional($.metadata),
        ";",
      ),

    _builtin_type: ($) =>
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

    vector_type: ($) => seq("[", $._vector_element, "]"),
    _vector_element: ($) => alias(choice($._builtin_type, $.ident), $.type),

    // Separate since currently only structs can have array members.
    array_type: ($) => seq("[", $._array_element, ":", $.integer_constant, "]"),
    _array_element: ($) => alias(choice($._builtin_type, $.ident), $.type),

    type: ($) => choice($._builtin_type, $.vector_type, $.ident),

    metadata: ($) =>
      seq(
        "(",
        optional(
          seq(
            seq($.ident, optional(seq(":", $._single_value))),
            repeat(seq(",", seq($.ident, optional(seq(":", $._single_value))))),
            optional(","),
          ),
        ),
        ")",
      ),

    _scalar: ($) =>
      choice($.boolean_constant, $.integer_constant, $.float_constant),

    json_object: ($) =>
      seq(
        "{",
        repeat(seq($._object_field, ",")),
        optional($._object_field),
        "}",
      ),

    _object_field: ($) =>
      seq(field("key", choice($.ident, $.string_constant)), ":", $.value),

    _single_value: ($) => choice($._scalar, $.string_constant),

    value: ($) => choice($._single_value, $.json_object, $.json_array),

    json_array: ($) =>
      seq(
        "[",
        optional(seq($.value, repeat(seq(",", $.value)), optional(","))),
        "]",
      ),

    // file_extension_decl
    file_extension: ($) => seq("file_extension", $.string_constant, ";"),

    // file_identifier_decl
    file_identifier: ($) => seq("file_identifier", $.string_constant, ";"),

    // ' is undocumented but compiles correctly
    string_constant: ($) => /("[^"]*?"|'[^']*?')/,

    // Empty vector is the only allowed constant.
    vector_constant: ($) => "[]",

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
