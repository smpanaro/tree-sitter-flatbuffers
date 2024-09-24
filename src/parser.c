#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_include = 1,
  anon_sym_SEMI = 2,
  anon_sym_namespace = 3,
  anon_sym_DOT = 4,
  anon_sym_attribute = 5,
  anon_sym_table = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COLON = 9,
  anon_sym_EQ = 10,
  anon_sym_struct = 11,
  anon_sym_enum = 12,
  anon_sym_COMMA = 13,
  anon_sym_union = 14,
  anon_sym_root_type = 15,
  anon_sym_rpc_service = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_bool = 19,
  anon_sym_byte = 20,
  anon_sym_ubyte = 21,
  anon_sym_short = 22,
  anon_sym_ushort = 23,
  anon_sym_int = 24,
  anon_sym_uint = 25,
  anon_sym_float = 26,
  anon_sym_long = 27,
  anon_sym_ulong = 28,
  anon_sym_double = 29,
  anon_sym_int8 = 30,
  anon_sym_uint8 = 31,
  anon_sym_int16 = 32,
  anon_sym_uint16 = 33,
  anon_sym_int32 = 34,
  anon_sym_uint32 = 35,
  anon_sym_int64 = 36,
  anon_sym_uint64 = 37,
  anon_sym_float32 = 38,
  anon_sym_float64 = 39,
  anon_sym_string = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_file_extension = 43,
  anon_sym_file_identifier = 44,
  sym_string_constant = 45,
  sym_vector_constant = 46,
  sym_ident = 47,
  aux_sym_integer_constant_token1 = 48,
  aux_sym_integer_constant_token2 = 49,
  aux_sym_float_constant_token1 = 50,
  aux_sym_float_constant_token2 = 51,
  aux_sym_float_constant_token3 = 52,
  anon_sym_true = 53,
  anon_sym_false = 54,
  anon_sym_SLASH_SLASH = 55,
  aux_sym_comment_token1 = 56,
  anon_sym_SLASH_STAR = 57,
  aux_sym_comment_token2 = 58,
  anon_sym_SLASH = 59,
  sym_schema = 60,
  sym_include = 61,
  sym_namespace = 62,
  sym_attribute = 63,
  sym_table = 64,
  sym_table_field = 65,
  sym_struct = 66,
  sym_struct_field = 67,
  sym_enum = 68,
  sym_enum_field = 69,
  sym__enum_field_name = 70,
  sym_union = 71,
  sym_union_field = 72,
  sym_root_type = 73,
  sym_rpc_service = 74,
  sym_rpc_method = 75,
  sym__builtin_type = 76,
  sym_vector_type = 77,
  sym__vector_element = 78,
  sym_array_type = 79,
  sym__array_element = 80,
  sym_type = 81,
  sym_metadata = 82,
  sym__scalar = 83,
  sym_json_object = 84,
  sym__object_field = 85,
  sym__single_value = 86,
  sym_value = 87,
  sym_json_array = 88,
  sym_file_extension = 89,
  sym_file_identifier = 90,
  sym_integer_constant = 91,
  sym_float_constant = 92,
  sym_boolean_constant = 93,
  sym_comment = 94,
  aux_sym_schema_repeat1 = 95,
  aux_sym_namespace_repeat1 = 96,
  aux_sym_table_repeat1 = 97,
  aux_sym_struct_repeat1 = 98,
  aux_sym_enum_repeat1 = 99,
  aux_sym_union_repeat1 = 100,
  aux_sym_rpc_service_repeat1 = 101,
  aux_sym_metadata_repeat1 = 102,
  aux_sym_json_object_repeat1 = 103,
  aux_sym_json_array_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_namespace] = "namespace",
  [anon_sym_DOT] = ".",
  [anon_sym_attribute] = "attribute",
  [anon_sym_table] = "table",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_union] = "union",
  [anon_sym_root_type] = "root_type",
  [anon_sym_rpc_service] = "rpc_service",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_byte] = "byte",
  [anon_sym_ubyte] = "ubyte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_float] = "float",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_double] = "double",
  [anon_sym_int8] = "int8",
  [anon_sym_uint8] = "uint8",
  [anon_sym_int16] = "int16",
  [anon_sym_uint16] = "uint16",
  [anon_sym_int32] = "int32",
  [anon_sym_uint32] = "uint32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_string] = "string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_file_extension] = "file_extension",
  [anon_sym_file_identifier] = "file_identifier",
  [sym_string_constant] = "string_constant",
  [sym_vector_constant] = "vector_constant",
  [sym_ident] = "ident",
  [aux_sym_integer_constant_token1] = "integer_constant_token1",
  [aux_sym_integer_constant_token2] = "integer_constant_token2",
  [aux_sym_float_constant_token1] = "float_constant_token1",
  [aux_sym_float_constant_token2] = "float_constant_token2",
  [aux_sym_float_constant_token3] = "float_constant_token3",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_schema] = "schema",
  [sym_include] = "include",
  [sym_namespace] = "namespace",
  [sym_attribute] = "attribute",
  [sym_table] = "table",
  [sym_table_field] = "table_field",
  [sym_struct] = "struct",
  [sym_struct_field] = "struct_field",
  [sym_enum] = "enum",
  [sym_enum_field] = "enum_field",
  [sym__enum_field_name] = "_enum_field_name",
  [sym_union] = "union",
  [sym_union_field] = "union_field",
  [sym_root_type] = "root_type",
  [sym_rpc_service] = "rpc_service",
  [sym_rpc_method] = "rpc_method",
  [sym__builtin_type] = "_builtin_type",
  [sym_vector_type] = "vector_type",
  [sym__vector_element] = "_vector_element",
  [sym_array_type] = "array_type",
  [sym__array_element] = "_array_element",
  [sym_type] = "type",
  [sym_metadata] = "metadata",
  [sym__scalar] = "_scalar",
  [sym_json_object] = "json_object",
  [sym__object_field] = "_object_field",
  [sym__single_value] = "_single_value",
  [sym_value] = "value",
  [sym_json_array] = "json_array",
  [sym_file_extension] = "file_extension",
  [sym_file_identifier] = "file_identifier",
  [sym_integer_constant] = "integer_constant",
  [sym_float_constant] = "float_constant",
  [sym_boolean_constant] = "boolean_constant",
  [sym_comment] = "comment",
  [aux_sym_schema_repeat1] = "schema_repeat1",
  [aux_sym_namespace_repeat1] = "namespace_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_union_repeat1] = "union_repeat1",
  [aux_sym_rpc_service_repeat1] = "rpc_service_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_root_type] = anon_sym_root_type,
  [anon_sym_rpc_service] = anon_sym_rpc_service,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_ubyte] = anon_sym_ubyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_file_extension] = anon_sym_file_extension,
  [anon_sym_file_identifier] = anon_sym_file_identifier,
  [sym_string_constant] = sym_string_constant,
  [sym_vector_constant] = sym_vector_constant,
  [sym_ident] = sym_ident,
  [aux_sym_integer_constant_token1] = aux_sym_integer_constant_token1,
  [aux_sym_integer_constant_token2] = aux_sym_integer_constant_token2,
  [aux_sym_float_constant_token1] = aux_sym_float_constant_token1,
  [aux_sym_float_constant_token2] = aux_sym_float_constant_token2,
  [aux_sym_float_constant_token3] = aux_sym_float_constant_token3,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_schema] = sym_schema,
  [sym_include] = sym_include,
  [sym_namespace] = sym_namespace,
  [sym_attribute] = sym_attribute,
  [sym_table] = sym_table,
  [sym_table_field] = sym_table_field,
  [sym_struct] = sym_struct,
  [sym_struct_field] = sym_struct_field,
  [sym_enum] = sym_enum,
  [sym_enum_field] = sym_enum_field,
  [sym__enum_field_name] = sym__enum_field_name,
  [sym_union] = sym_union,
  [sym_union_field] = sym_union_field,
  [sym_root_type] = sym_root_type,
  [sym_rpc_service] = sym_rpc_service,
  [sym_rpc_method] = sym_rpc_method,
  [sym__builtin_type] = sym__builtin_type,
  [sym_vector_type] = sym_vector_type,
  [sym__vector_element] = sym__vector_element,
  [sym_array_type] = sym_array_type,
  [sym__array_element] = sym__array_element,
  [sym_type] = sym_type,
  [sym_metadata] = sym_metadata,
  [sym__scalar] = sym__scalar,
  [sym_json_object] = sym_json_object,
  [sym__object_field] = sym__object_field,
  [sym__single_value] = sym__single_value,
  [sym_value] = sym_value,
  [sym_json_array] = sym_json_array,
  [sym_file_extension] = sym_file_extension,
  [sym_file_identifier] = sym_file_identifier,
  [sym_integer_constant] = sym_integer_constant,
  [sym_float_constant] = sym_float_constant,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_comment] = sym_comment,
  [aux_sym_schema_repeat1] = aux_sym_schema_repeat1,
  [aux_sym_namespace_repeat1] = aux_sym_namespace_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_union_repeat1] = aux_sym_union_repeat1,
  [aux_sym_rpc_service_repeat1] = aux_sym_rpc_service_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_identifier] = {
    .visible = true,
    .named = false,
  },
  [sym_string_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_constant_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_field] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym__enum_field_name] = {
    .visible = false,
    .named = true,
  },
  [sym_union] = {
    .visible = true,
    .named = true,
  },
  [sym_union_field] = {
    .visible = true,
    .named = true,
  },
  [sym_root_type] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_service] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_method] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_type] = {
    .visible = false,
    .named = true,
  },
  [sym_vector_type] = {
    .visible = true,
    .named = true,
  },
  [sym__vector_element] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym__array_element] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar] = {
    .visible = false,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_field] = {
    .visible = false,
    .named = true,
  },
  [sym__single_value] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_file_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_file_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_float_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_schema_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default = 1,
  field_key = 2,
  field_name = 3,
  field_request = 4,
  field_response = 5,
  field_typename = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_key] = "key",
  [field_name] = "name",
  [field_request] = "request",
  [field_response] = "response",
  [field_typename] = "typename",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 14, .length = 3},
  [14] = {.index = 14, .length = 3},
  [15] = {.index = 17, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 1, .inherited = true},
  [2] =
    {field_key, 0, .inherited = true},
  [3] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
  [5] =
    {field_name, 1},
    {field_name, 2},
  [7] =
    {field_key, 0},
  [8] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
  [10] =
    {field_typename, 0},
  [11] =
    {field_name, 0},
  [12] =
    {field_name, 0},
    {field_typename, 2},
  [14] =
    {field_default, 3},
    {field_default, 4},
    {field_name, 0},
  [17] =
    {field_name, 0},
    {field_request, 2},
    {field_response, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = sym_type,
  },
  [12] = {
    [2] = sym_type,
  },
  [13] = {
    [2] = sym_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__builtin_type, 2,
    sym__builtin_type,
    sym_type,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 32,
  [95] = 95,
  [96] = 96,
  [97] = 41,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 35,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 29,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 124,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 125,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 184,
  [222] = 219,
  [223] = 186,
  [224] = 17,
  [225] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      ADVANCE_MAP(
        '"', 4,
        '\'', 5,
        '(', 172,
        ')', 173,
        ',', 168,
        '.', 159,
        '/', 293,
        '0', 273,
        ':', 164,
        ';', 156,
        '=', 165,
        '[', 218,
        ']', 219,
        'a', 128,
        'b', 98,
        'd', 97,
        'e', 90,
        'f', 26,
        'i', 84,
        'l', 99,
        'n', 27,
        'r', 104,
        's', 66,
        't', 28,
        'u', 32,
        '{', 162,
        '}', 163,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 4,
        '\'', 5,
        '.', 150,
        '/', 6,
        '0', 273,
        '[', 218,
        ']', 219,
        'f', 25,
        'i', 87,
        'n', 31,
        't', 115,
        '{', 162,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 4,
        '\'', 5,
        '.', 150,
        '/', 6,
        '0', 273,
        '[', 21,
        'f', 25,
        'i', 87,
        'n', 31,
        't', 115,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '/') ADVANCE(283);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '.', 158,
        '/', 6,
        ';', 156,
        '[', 218,
        'b', 257,
        'd', 252,
        'f', 246,
        'i', 248,
        'l', 255,
        's', 241,
        'u', 233,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(210);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(202);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(223);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 142:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 145:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 147:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 148:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 149:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(230);
      if (lookahead == '3') ADVANCE(224);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == '8') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == '3') ADVANCE(225);
      if (lookahead == '6') ADVANCE(228);
      if (lookahead == '8') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(226);
      if (lookahead == '6') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string_constant);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_vector_constant);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_integer_constant_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_float_constant_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_float_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_float_constant_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_float_constant_token3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_float_constant_token3);
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '/') ADVANCE(283);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 287},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 287},
  [223] = {.lex_state = 7},
  [224] = {(TSStateId)(-1)},
  [225] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_root_type] = ACTIONS(1),
    [anon_sym_rpc_service] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_ubyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_file_extension] = ACTIONS(1),
    [anon_sym_file_identifier] = ACTIONS(1),
    [sym_string_constant] = ACTIONS(1),
    [aux_sym_integer_constant_token1] = ACTIONS(1),
    [aux_sym_integer_constant_token2] = ACTIONS(1),
    [aux_sym_float_constant_token1] = ACTIONS(1),
    [aux_sym_float_constant_token2] = ACTIONS(1),
    [aux_sym_float_constant_token3] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_schema] = STATE(190),
    [sym_include] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_table] = STATE(6),
    [sym_struct] = STATE(6),
    [sym_enum] = STATE(6),
    [sym_union] = STATE(6),
    [sym_root_type] = STATE(6),
    [sym_rpc_service] = STATE(6),
    [sym_json_object] = STATE(6),
    [sym_file_extension] = STATE(6),
    [sym_file_identifier] = STATE(6),
    [sym_comment] = STATE(1),
    [aux_sym_schema_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_attribute] = ACTIONS(13),
    [anon_sym_table] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(23),
    [anon_sym_root_type] = ACTIONS(25),
    [anon_sym_rpc_service] = ACTIONS(27),
    [anon_sym_file_extension] = ACTIONS(29),
    [anon_sym_file_identifier] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_ident,
    STATE(2), 1,
      sym_comment,
    STATE(104), 1,
      sym__builtin_type,
    STATE(110), 2,
      sym_vector_type,
      sym_array_type,
    ACTIONS(37), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [47] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_ident,
    STATE(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_type,
    STATE(136), 2,
      sym__builtin_type,
      sym_vector_type,
    ACTIONS(37), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [94] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_ident,
    STATE(4), 1,
      sym_comment,
    STATE(65), 1,
      sym__builtin_type,
    STATE(76), 1,
      sym_vector_type,
    ACTIONS(37), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [140] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      sym_ident,
    STATE(5), 1,
      sym_comment,
    STATE(120), 1,
      sym__builtin_type,
    STATE(177), 1,
      sym__array_element,
    STATE(217), 1,
      sym__vector_element,
    ACTIONS(37), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [186] = 17,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_attribute,
    ACTIONS(15), 1,
      anon_sym_table,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_struct,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_root_type,
    ACTIONS(27), 1,
      anon_sym_rpc_service,
    ACTIONS(29), 1,
      anon_sym_file_extension,
    ACTIONS(31), 1,
      anon_sym_file_identifier,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 13,
      sym_include,
      sym_namespace,
      sym_attribute,
      sym_table,
      sym_struct,
      sym_enum,
      sym_union,
      sym_root_type,
      sym_rpc_service,
      sym_json_object,
      sym_file_extension,
      sym_file_identifier,
      aux_sym_schema_repeat1,
  [250] = 16,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(58), 1,
      anon_sym_namespace,
    ACTIONS(61), 1,
      anon_sym_attribute,
    ACTIONS(64), 1,
      anon_sym_table,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_struct,
    ACTIONS(73), 1,
      anon_sym_enum,
    ACTIONS(76), 1,
      anon_sym_union,
    ACTIONS(79), 1,
      anon_sym_root_type,
    ACTIONS(82), 1,
      anon_sym_rpc_service,
    ACTIONS(85), 1,
      anon_sym_file_extension,
    ACTIONS(88), 1,
      anon_sym_file_identifier,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 14,
      sym_include,
      sym_namespace,
      sym_attribute,
      sym_table,
      sym_struct,
      sym_enum,
      sym_union,
      sym_root_type,
      sym_rpc_service,
      sym_json_object,
      sym_file_extension,
      sym_file_identifier,
      sym_comment,
      aux_sym_schema_repeat1,
  [312] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      sym_ident,
    STATE(8), 1,
      sym_comment,
    STATE(212), 1,
      sym__builtin_type,
    STATE(217), 1,
      sym__vector_element,
    ACTIONS(37), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [355] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(9), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(165), 1,
      sym_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
    STATE(116), 3,
      sym_json_object,
      sym__single_value,
      sym_json_array,
  [408] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(106), 1,
      sym_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
    STATE(116), 3,
      sym_json_object,
      sym__single_value,
      sym_json_array,
  [461] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(165), 1,
      sym_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
    STATE(116), 3,
      sym_json_object,
      sym__single_value,
      sym_json_array,
  [514] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(12), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(165), 1,
      sym_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
    STATE(116), 3,
      sym_json_object,
      sym__single_value,
      sym_json_array,
  [564] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(13), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(140), 1,
      sym_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
    STATE(116), 3,
      sym_json_object,
      sym__single_value,
      sym_json_array,
  [614] = 2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [635] = 2,
    STATE(15), 1,
      sym_comment,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [656] = 2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [677] = 2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [698] = 2,
    STATE(18), 1,
      sym_comment,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [719] = 2,
    STATE(19), 1,
      sym_comment,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [740] = 2,
    STATE(20), 1,
      sym_comment,
    ACTIONS(131), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [761] = 2,
    STATE(21), 1,
      sym_comment,
    ACTIONS(133), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [782] = 2,
    STATE(22), 1,
      sym_comment,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [803] = 2,
    STATE(23), 1,
      sym_comment,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [824] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(24), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(111), 1,
      sym__single_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [863] = 2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(139), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [884] = 2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(141), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [905] = 2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(143), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [926] = 2,
    STATE(28), 1,
      sym_comment,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [947] = 2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(147), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [968] = 2,
    STATE(30), 1,
      sym_comment,
    ACTIONS(149), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [989] = 2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1010] = 2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(153), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1031] = 2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(155), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1052] = 2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(157), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1073] = 2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(153), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1094] = 2,
    STATE(36), 1,
      sym_comment,
    ACTIONS(159), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1115] = 2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(161), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1136] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      sym_string_constant,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(38), 1,
      sym_comment,
    STATE(71), 1,
      sym__scalar,
    STATE(158), 1,
      sym__single_value,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [1175] = 2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(163), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1196] = 2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1217] = 2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(167), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1238] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(42), 1,
      sym_comment,
    STATE(107), 1,
      sym__scalar,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_string_constant,
      sym_vector_constant,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [1275] = 2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(171), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1296] = 2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(173), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_LBRACE,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1317] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      aux_sym_float_constant_token1,
    STATE(45), 1,
      sym_comment,
    STATE(108), 1,
      sym__scalar,
    ACTIONS(107), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(111), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_string_constant,
      sym_vector_constant,
    STATE(46), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [1354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1372] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [1390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(181), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(185), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1444] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_json_object_repeat1,
    STATE(155), 1,
      sym__object_field,
    ACTIONS(189), 2,
      sym_string_constant,
      sym_ident,
  [1467] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_json_object_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(167), 1,
      sym__object_field,
    ACTIONS(189), 2,
      sym_string_constant,
      sym_ident,
  [1490] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym__object_field,
    ACTIONS(195), 2,
      sym_string_constant,
      sym_ident,
    STATE(53), 2,
      sym_comment,
      aux_sym_json_object_repeat1,
  [1511] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym_ident,
    STATE(54), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_enum_repeat1,
    STATE(92), 1,
      sym__enum_field_name,
    STATE(168), 1,
      sym_enum_field,
  [1536] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym_ident,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_enum_repeat1,
    STATE(92), 1,
      sym__enum_field_name,
    STATE(168), 1,
      sym_enum_field,
  [1561] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_json_object_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(124), 1,
      sym__object_field,
    ACTIONS(189), 2,
      sym_string_constant,
      sym_ident,
  [1584] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym_ident,
    STATE(92), 1,
      sym__enum_field_name,
    STATE(196), 1,
      sym_enum_field,
    STATE(57), 2,
      sym_comment,
      aux_sym_enum_repeat1,
  [1607] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_enum_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(92), 1,
      sym__enum_field_name,
    STATE(149), 1,
      sym_enum_field,
  [1632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_json_object_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(125), 1,
      sym__object_field,
    ACTIONS(189), 2,
      sym_string_constant,
      sym_ident,
  [1655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(213), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [1672] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_enum_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(92), 1,
      sym__enum_field_name,
    STATE(143), 1,
      sym_enum_field,
  [1697] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_ident,
    STATE(62), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_union_repeat1,
    STATE(123), 1,
      sym_union_field,
  [1719] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_ident,
    STATE(63), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_union_repeat1,
    STATE(123), 1,
      sym_union_field,
  [1741] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
    STATE(194), 1,
      sym_metadata,
  [1763] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_EQ,
    STATE(65), 1,
      sym_comment,
    STATE(194), 1,
      sym_metadata,
  [1785] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_ident,
    STATE(133), 1,
      sym_rpc_method,
    STATE(66), 2,
      sym_comment,
      aux_sym_rpc_service_repeat1,
  [1805] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      sym_ident,
    STATE(67), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_table_repeat1,
    STATE(142), 1,
      sym_table_field,
  [1827] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_union_repeat1,
    STATE(150), 1,
      sym_union_field,
  [1849] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_table_repeat1,
    STATE(142), 1,
      sym_table_field,
  [1871] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_metadata_repeat1,
  [1893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1909] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_table_repeat1,
    STATE(142), 1,
      sym_table_field,
  [1931] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_union_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(135), 1,
      sym_union_field,
  [1953] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_ident,
    STATE(74), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_struct_repeat1,
    STATE(137), 1,
      sym_struct_field,
  [1975] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      sym_ident,
    STATE(199), 1,
      sym_union_field,
    STATE(75), 2,
      sym_comment,
      aux_sym_union_repeat1,
  [1995] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(76), 1,
      sym_comment,
    STATE(192), 1,
      sym_metadata,
  [2017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2033] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_struct_repeat1,
    STATE(137), 1,
      sym_struct_field,
  [2055] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym_ident,
    STATE(137), 1,
      sym_struct_field,
    STATE(79), 2,
      sym_comment,
      aux_sym_struct_repeat1,
  [2075] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_table_repeat1,
    STATE(142), 1,
      sym_table_field,
  [2097] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      sym_ident,
    STATE(142), 1,
      sym_table_field,
    STATE(81), 2,
      sym_comment,
      aux_sym_table_repeat1,
  [2117] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_ident,
    STATE(66), 1,
      aux_sym_rpc_service_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(133), 1,
      sym_rpc_method,
  [2139] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_struct_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(137), 1,
      sym_struct_field,
  [2161] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_struct_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(137), 1,
      sym_struct_field,
  [2183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2217] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_json_array_repeat1,
  [2236] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_comment,
    STATE(189), 1,
      sym_metadata,
  [2255] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_comment,
    STATE(203), 1,
      sym_metadata,
  [2274] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym_ident,
    STATE(82), 1,
      aux_sym_rpc_service_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(133), 1,
      sym_rpc_method,
  [2293] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2308] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2325] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_comment,
    STATE(201), 1,
      sym_metadata,
  [2344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2359] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      aux_sym_integer_constant_token1,
    ACTIONS(309), 1,
      aux_sym_integer_constant_token2,
    STATE(95), 1,
      sym_comment,
    STATE(151), 1,
      sym_integer_constant,
  [2378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(96), 2,
      sym_comment,
      aux_sym_json_array_repeat1,
  [2395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2410] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_comment,
    STATE(193), 1,
      sym_metadata,
  [2429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2444] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_DOT,
    STATE(100), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_namespace_repeat1,
  [2463] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(101), 2,
      sym_comment,
      aux_sym_metadata_repeat1,
  [2480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2495] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_metadata_repeat1,
    STATE(103), 1,
      sym_comment,
  [2514] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_comment,
    STATE(198), 1,
      sym_metadata,
  [2533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2548] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_json_array_repeat1,
    STATE(106), 1,
      sym_comment,
  [2567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_comment,
    STATE(200), 1,
      sym_metadata,
  [2586] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_comment,
    STATE(202), 1,
      sym_metadata,
  [2605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_metadata_repeat1,
    STATE(109), 1,
      sym_comment,
  [2624] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
    STATE(171), 1,
      sym_metadata,
  [2643] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_metadata_repeat1,
    STATE(111), 1,
      sym_comment,
  [2662] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_namespace_repeat1,
  [2681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2696] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      aux_sym_integer_constant_token1,
    ACTIONS(309), 1,
      aux_sym_integer_constant_token2,
    STATE(114), 1,
      sym_comment,
    STATE(204), 1,
      sym_integer_constant,
  [2715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_RBRACE,
      sym_string_constant,
      sym_ident,
  [2730] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2745] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_comment,
    STATE(211), 1,
      sym_metadata,
  [2764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2779] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(119), 2,
      sym_comment,
      aux_sym_namespace_repeat1,
  [2796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      sym_comment,
  [2812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2840] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      sym_comment,
  [2856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      sym_comment,
  [2872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_comment,
  [2888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(382), 2,
      sym_string_constant,
      sym_ident,
  [2902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2944] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym_ident,
    STATE(130), 1,
      sym_comment,
  [2960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym_ident,
    STATE(132), 1,
      sym_comment,
  [2990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3018] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      sym_comment,
  [3034] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3048] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_comment,
  [3148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [3176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3204] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3218] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_comment,
  [3234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym_comment,
  [3250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3278] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      sym_ident,
    STATE(107), 1,
      sym__enum_field_name,
    STATE(153), 1,
      sym_comment,
  [3294] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3308] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_comment,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym_ident,
    STATE(159), 1,
      sym_comment,
  [3382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      sym_ident,
    STATE(161), 1,
      sym_comment,
  [3412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(390), 1,
      sym_ident,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_comment,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_comment,
  [3500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_comment,
  [3516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(169), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(170), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_comment,
  [3557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      sym_ident,
    STATE(172), 1,
      sym_comment,
  [3570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      sym_ident,
    STATE(173), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_comment,
  [3596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(466), 1,
      sym_ident,
    STATE(175), 1,
      sym_comment,
  [3609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_comment,
  [3635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_comment,
  [3648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      sym_comment,
  [3674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      sym_comment,
  [3700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_comment,
  [3713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(184), 1,
      sym_comment,
  [3726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_comment,
  [3739] = 4,
    ACTIONS(488), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(490), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(492), 1,
      aux_sym_comment_token2,
    STATE(186), 1,
      sym_comment,
  [3752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(390), 1,
      sym_ident,
    STATE(187), 1,
      sym_comment,
  [3765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      sym_ident,
    STATE(188), 1,
      sym_comment,
  [3778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_comment,
  [3791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      sym_comment,
  [3804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      sym_string_constant,
    STATE(191), 1,
      sym_comment,
  [3817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_comment,
  [3830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [3843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      sym_comment,
  [3856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      sym_string_constant,
    STATE(195), 1,
      sym_comment,
  [3869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_comment,
  [3882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [3895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_comment,
  [3908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_comment,
  [3921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(514), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      sym_comment,
  [3934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_comment,
  [3947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_comment,
  [3960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_comment,
  [3973] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
  [3986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(524), 1,
      sym_ident,
    STATE(205), 1,
      sym_comment,
  [3999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      sym_ident,
    STATE(206), 1,
      sym_comment,
  [4012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(528), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_comment,
  [4025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      sym_comment,
  [4038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(530), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [4051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_comment,
  [4064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      sym_comment,
  [4077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
  [4090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(536), 1,
      sym_ident,
    STATE(213), 1,
      sym_comment,
  [4103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(538), 1,
      sym_ident,
    STATE(214), 1,
      sym_comment,
  [4116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(540), 1,
      sym_ident,
    STATE(215), 1,
      sym_comment,
  [4129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(542), 1,
      sym_ident,
    STATE(216), 1,
      sym_comment,
  [4142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
  [4155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(546), 1,
      sym_ident,
    STATE(218), 1,
      sym_comment,
  [4168] = 4,
    ACTIONS(488), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(490), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      aux_sym_comment_token1,
    STATE(219), 1,
      sym_comment,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(550), 1,
      sym_string_constant,
    STATE(220), 1,
      sym_comment,
  [4194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(552), 1,
      anon_sym_SLASH,
    STATE(221), 1,
      sym_comment,
  [4207] = 4,
    ACTIONS(488), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(490), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(554), 1,
      aux_sym_comment_token1,
    STATE(222), 1,
      sym_comment,
  [4220] = 4,
    ACTIONS(488), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(490), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(556), 1,
      aux_sym_comment_token2,
    STATE(223), 1,
      sym_comment,
  [4233] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [4237] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 140,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 355,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 461,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 614,
  [SMALL_STATE(15)] = 635,
  [SMALL_STATE(16)] = 656,
  [SMALL_STATE(17)] = 677,
  [SMALL_STATE(18)] = 698,
  [SMALL_STATE(19)] = 719,
  [SMALL_STATE(20)] = 740,
  [SMALL_STATE(21)] = 761,
  [SMALL_STATE(22)] = 782,
  [SMALL_STATE(23)] = 803,
  [SMALL_STATE(24)] = 824,
  [SMALL_STATE(25)] = 863,
  [SMALL_STATE(26)] = 884,
  [SMALL_STATE(27)] = 905,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 947,
  [SMALL_STATE(30)] = 968,
  [SMALL_STATE(31)] = 989,
  [SMALL_STATE(32)] = 1010,
  [SMALL_STATE(33)] = 1031,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1073,
  [SMALL_STATE(36)] = 1094,
  [SMALL_STATE(37)] = 1115,
  [SMALL_STATE(38)] = 1136,
  [SMALL_STATE(39)] = 1175,
  [SMALL_STATE(40)] = 1196,
  [SMALL_STATE(41)] = 1217,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1275,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1317,
  [SMALL_STATE(46)] = 1354,
  [SMALL_STATE(47)] = 1372,
  [SMALL_STATE(48)] = 1390,
  [SMALL_STATE(49)] = 1408,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1444,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1490,
  [SMALL_STATE(54)] = 1511,
  [SMALL_STATE(55)] = 1536,
  [SMALL_STATE(56)] = 1561,
  [SMALL_STATE(57)] = 1584,
  [SMALL_STATE(58)] = 1607,
  [SMALL_STATE(59)] = 1632,
  [SMALL_STATE(60)] = 1655,
  [SMALL_STATE(61)] = 1672,
  [SMALL_STATE(62)] = 1697,
  [SMALL_STATE(63)] = 1719,
  [SMALL_STATE(64)] = 1741,
  [SMALL_STATE(65)] = 1763,
  [SMALL_STATE(66)] = 1785,
  [SMALL_STATE(67)] = 1805,
  [SMALL_STATE(68)] = 1827,
  [SMALL_STATE(69)] = 1849,
  [SMALL_STATE(70)] = 1871,
  [SMALL_STATE(71)] = 1893,
  [SMALL_STATE(72)] = 1909,
  [SMALL_STATE(73)] = 1931,
  [SMALL_STATE(74)] = 1953,
  [SMALL_STATE(75)] = 1975,
  [SMALL_STATE(76)] = 1995,
  [SMALL_STATE(77)] = 2017,
  [SMALL_STATE(78)] = 2033,
  [SMALL_STATE(79)] = 2055,
  [SMALL_STATE(80)] = 2075,
  [SMALL_STATE(81)] = 2097,
  [SMALL_STATE(82)] = 2117,
  [SMALL_STATE(83)] = 2139,
  [SMALL_STATE(84)] = 2161,
  [SMALL_STATE(85)] = 2183,
  [SMALL_STATE(86)] = 2200,
  [SMALL_STATE(87)] = 2217,
  [SMALL_STATE(88)] = 2236,
  [SMALL_STATE(89)] = 2255,
  [SMALL_STATE(90)] = 2274,
  [SMALL_STATE(91)] = 2293,
  [SMALL_STATE(92)] = 2308,
  [SMALL_STATE(93)] = 2325,
  [SMALL_STATE(94)] = 2344,
  [SMALL_STATE(95)] = 2359,
  [SMALL_STATE(96)] = 2378,
  [SMALL_STATE(97)] = 2395,
  [SMALL_STATE(98)] = 2410,
  [SMALL_STATE(99)] = 2429,
  [SMALL_STATE(100)] = 2444,
  [SMALL_STATE(101)] = 2463,
  [SMALL_STATE(102)] = 2480,
  [SMALL_STATE(103)] = 2495,
  [SMALL_STATE(104)] = 2514,
  [SMALL_STATE(105)] = 2533,
  [SMALL_STATE(106)] = 2548,
  [SMALL_STATE(107)] = 2567,
  [SMALL_STATE(108)] = 2586,
  [SMALL_STATE(109)] = 2605,
  [SMALL_STATE(110)] = 2624,
  [SMALL_STATE(111)] = 2643,
  [SMALL_STATE(112)] = 2662,
  [SMALL_STATE(113)] = 2681,
  [SMALL_STATE(114)] = 2696,
  [SMALL_STATE(115)] = 2715,
  [SMALL_STATE(116)] = 2730,
  [SMALL_STATE(117)] = 2745,
  [SMALL_STATE(118)] = 2764,
  [SMALL_STATE(119)] = 2779,
  [SMALL_STATE(120)] = 2796,
  [SMALL_STATE(121)] = 2812,
  [SMALL_STATE(122)] = 2826,
  [SMALL_STATE(123)] = 2840,
  [SMALL_STATE(124)] = 2856,
  [SMALL_STATE(125)] = 2872,
  [SMALL_STATE(126)] = 2888,
  [SMALL_STATE(127)] = 2902,
  [SMALL_STATE(128)] = 2916,
  [SMALL_STATE(129)] = 2930,
  [SMALL_STATE(130)] = 2944,
  [SMALL_STATE(131)] = 2960,
  [SMALL_STATE(132)] = 2974,
  [SMALL_STATE(133)] = 2990,
  [SMALL_STATE(134)] = 3004,
  [SMALL_STATE(135)] = 3018,
  [SMALL_STATE(136)] = 3034,
  [SMALL_STATE(137)] = 3048,
  [SMALL_STATE(138)] = 3062,
  [SMALL_STATE(139)] = 3076,
  [SMALL_STATE(140)] = 3090,
  [SMALL_STATE(141)] = 3104,
  [SMALL_STATE(142)] = 3118,
  [SMALL_STATE(143)] = 3132,
  [SMALL_STATE(144)] = 3148,
  [SMALL_STATE(145)] = 3162,
  [SMALL_STATE(146)] = 3176,
  [SMALL_STATE(147)] = 3190,
  [SMALL_STATE(148)] = 3204,
  [SMALL_STATE(149)] = 3218,
  [SMALL_STATE(150)] = 3234,
  [SMALL_STATE(151)] = 3250,
  [SMALL_STATE(152)] = 3264,
  [SMALL_STATE(153)] = 3278,
  [SMALL_STATE(154)] = 3294,
  [SMALL_STATE(155)] = 3308,
  [SMALL_STATE(156)] = 3324,
  [SMALL_STATE(157)] = 3338,
  [SMALL_STATE(158)] = 3352,
  [SMALL_STATE(159)] = 3366,
  [SMALL_STATE(160)] = 3382,
  [SMALL_STATE(161)] = 3396,
  [SMALL_STATE(162)] = 3412,
  [SMALL_STATE(163)] = 3428,
  [SMALL_STATE(164)] = 3442,
  [SMALL_STATE(165)] = 3456,
  [SMALL_STATE(166)] = 3470,
  [SMALL_STATE(167)] = 3484,
  [SMALL_STATE(168)] = 3500,
  [SMALL_STATE(169)] = 3516,
  [SMALL_STATE(170)] = 3530,
  [SMALL_STATE(171)] = 3544,
  [SMALL_STATE(172)] = 3557,
  [SMALL_STATE(173)] = 3570,
  [SMALL_STATE(174)] = 3583,
  [SMALL_STATE(175)] = 3596,
  [SMALL_STATE(176)] = 3609,
  [SMALL_STATE(177)] = 3622,
  [SMALL_STATE(178)] = 3635,
  [SMALL_STATE(179)] = 3648,
  [SMALL_STATE(180)] = 3661,
  [SMALL_STATE(181)] = 3674,
  [SMALL_STATE(182)] = 3687,
  [SMALL_STATE(183)] = 3700,
  [SMALL_STATE(184)] = 3713,
  [SMALL_STATE(185)] = 3726,
  [SMALL_STATE(186)] = 3739,
  [SMALL_STATE(187)] = 3752,
  [SMALL_STATE(188)] = 3765,
  [SMALL_STATE(189)] = 3778,
  [SMALL_STATE(190)] = 3791,
  [SMALL_STATE(191)] = 3804,
  [SMALL_STATE(192)] = 3817,
  [SMALL_STATE(193)] = 3830,
  [SMALL_STATE(194)] = 3843,
  [SMALL_STATE(195)] = 3856,
  [SMALL_STATE(196)] = 3869,
  [SMALL_STATE(197)] = 3882,
  [SMALL_STATE(198)] = 3895,
  [SMALL_STATE(199)] = 3908,
  [SMALL_STATE(200)] = 3921,
  [SMALL_STATE(201)] = 3934,
  [SMALL_STATE(202)] = 3947,
  [SMALL_STATE(203)] = 3960,
  [SMALL_STATE(204)] = 3973,
  [SMALL_STATE(205)] = 3986,
  [SMALL_STATE(206)] = 3999,
  [SMALL_STATE(207)] = 4012,
  [SMALL_STATE(208)] = 4025,
  [SMALL_STATE(209)] = 4038,
  [SMALL_STATE(210)] = 4051,
  [SMALL_STATE(211)] = 4064,
  [SMALL_STATE(212)] = 4077,
  [SMALL_STATE(213)] = 4090,
  [SMALL_STATE(214)] = 4103,
  [SMALL_STATE(215)] = 4116,
  [SMALL_STATE(216)] = 4129,
  [SMALL_STATE(217)] = 4142,
  [SMALL_STATE(218)] = 4155,
  [SMALL_STATE(219)] = 4168,
  [SMALL_STATE(220)] = 4181,
  [SMALL_STATE(221)] = 4194,
  [SMALL_STATE(222)] = 4207,
  [SMALL_STATE(223)] = 4220,
  [SMALL_STATE(224)] = 4233,
  [SMALL_STATE(225)] = 4237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_service, 5, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 9, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 8, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 7, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_type, 3, 0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scalar, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_type, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 4),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 4), SHIFT_REPEAT(179),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_field_name, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_service_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_service_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_value, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_type, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field, 1, 0, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 5, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_element, 1, 0, 9),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vector_element, 1, 0, 9),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4, 0, 10),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 15),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 15),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_service_repeat1, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 7, 0, 14),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 7, 0, 13),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_field, 3, 0, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 7, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 6, 0, 14),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field, 3, 0, 11),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 6, 0, 13),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 10),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 4, 0, 12),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 10),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 4, 0, 10),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 12),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 4, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 6, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 5, 0, 10),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 5, 0, 12),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4, 0, 12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [498] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_flatbuffers(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
