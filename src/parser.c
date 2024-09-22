#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_include = 1,
  anon_sym_SEMI = 2,
  anon_sym_namespace = 3,
  anon_sym_DOT = 4,
  anon_sym_attribute = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_table = 7,
  anon_sym_struct = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  anon_sym_EQ = 12,
  anon_sym_enum = 13,
  anon_sym_union = 14,
  anon_sym_COMMA = 15,
  anon_sym_root_type = 16,
  anon_sym_rpc_service = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_bool = 20,
  anon_sym_byte = 21,
  anon_sym_ubyte = 22,
  anon_sym_short = 23,
  anon_sym_ushort = 24,
  anon_sym_int = 25,
  anon_sym_uint = 26,
  anon_sym_float = 27,
  anon_sym_long = 28,
  anon_sym_ulong = 29,
  anon_sym_double = 30,
  anon_sym_int8 = 31,
  anon_sym_uint8 = 32,
  anon_sym_int16 = 33,
  anon_sym_uint16 = 34,
  anon_sym_int32 = 35,
  anon_sym_uint32 = 36,
  anon_sym_int64 = 37,
  anon_sym_uint64 = 38,
  anon_sym_float32 = 39,
  anon_sym_float64 = 40,
  anon_sym_string = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_file_extension = 44,
  anon_sym_file_identifier = 45,
  sym_string_constant = 46,
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
  sym_table_struct = 64,
  sym_table_field = 65,
  sym_enum_union = 66,
  sym_enum_field = 67,
  sym_enum_field_name = 68,
  sym_root_type = 69,
  sym_rpc_service = 70,
  sym_rpc_method = 71,
  sym_type = 72,
  sym_metadata = 73,
  sym_scalar = 74,
  sym_object = 75,
  sym_single_value = 76,
  sym_value = 77,
  sym_file_extension = 78,
  sym_file_identifier = 79,
  sym_integer_constant = 80,
  sym_float_constant = 81,
  sym_boolean_constant = 82,
  sym_comment = 83,
  aux_sym_schema_repeat1 = 84,
  aux_sym_namespace_repeat1 = 85,
  aux_sym_table_struct_repeat1 = 86,
  aux_sym_enum_union_repeat1 = 87,
  aux_sym_rpc_service_repeat1 = 88,
  aux_sym_metadata_repeat1 = 89,
  aux_sym_object_repeat1 = 90,
  aux_sym_value_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_namespace] = "namespace",
  [anon_sym_DOT] = ".",
  [anon_sym_attribute] = "attribute",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_table] = "table",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_enum] = "enum",
  [anon_sym_union] = "union",
  [anon_sym_COMMA] = ",",
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
  [sym_table_struct] = "table_struct",
  [sym_table_field] = "table_field",
  [sym_enum_union] = "enum_union",
  [sym_enum_field] = "enum_field",
  [sym_enum_field_name] = "enum_field_name",
  [sym_root_type] = "root_type",
  [sym_rpc_service] = "rpc_service",
  [sym_rpc_method] = "rpc_method",
  [sym_type] = "type",
  [sym_metadata] = "metadata",
  [sym_scalar] = "scalar",
  [sym_object] = "object",
  [sym_single_value] = "single_value",
  [sym_value] = "value",
  [sym_file_extension] = "file_extension",
  [sym_file_identifier] = "file_identifier",
  [sym_integer_constant] = "integer_constant",
  [sym_float_constant] = "float_constant",
  [sym_boolean_constant] = "boolean_constant",
  [sym_comment] = "comment",
  [aux_sym_schema_repeat1] = "schema_repeat1",
  [aux_sym_namespace_repeat1] = "namespace_repeat1",
  [aux_sym_table_struct_repeat1] = "table_struct_repeat1",
  [aux_sym_enum_union_repeat1] = "enum_union_repeat1",
  [aux_sym_rpc_service_repeat1] = "rpc_service_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_table_struct] = sym_table_struct,
  [sym_table_field] = sym_table_field,
  [sym_enum_union] = sym_enum_union,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_field_name] = sym_enum_field_name,
  [sym_root_type] = sym_root_type,
  [sym_rpc_service] = sym_rpc_service,
  [sym_rpc_method] = sym_rpc_method,
  [sym_type] = sym_type,
  [sym_metadata] = sym_metadata,
  [sym_scalar] = sym_scalar,
  [sym_object] = sym_object,
  [sym_single_value] = sym_single_value,
  [sym_value] = sym_value,
  [sym_file_extension] = sym_file_extension,
  [sym_file_identifier] = sym_file_identifier,
  [sym_integer_constant] = sym_integer_constant,
  [sym_float_constant] = sym_float_constant,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_comment] = sym_comment,
  [aux_sym_schema_repeat1] = aux_sym_schema_repeat1,
  [aux_sym_namespace_repeat1] = aux_sym_namespace_repeat1,
  [aux_sym_table_struct_repeat1] = aux_sym_table_struct_repeat1,
  [aux_sym_enum_union_repeat1] = aux_sym_enum_union_repeat1,
  [aux_sym_rpc_service_repeat1] = aux_sym_rpc_service_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_table_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_table_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_union] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field_name] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_single_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [aux_sym_table_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_union_repeat1] = {
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
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_name, 2},
  [3] =
    {field_name, 1},
    {field_name, 2},
    {field_name, 3},
  [6] =
    {field_name, 0},
  [7] =
    {field_default, 3},
    {field_default, 4},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
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
  [72] = 18,
  [73] = 17,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
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
  [118] = 118,
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
  [155] = 155,
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
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 157,
  [176] = 139,
  [177] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '"', 166,
        '(', 178,
        ')', 179,
        ',', 175,
        '.', 164,
        '/', 315,
        '0', 294,
        ':', 171,
        ';', 161,
        '=', 172,
        '[', 224,
        ']', 225,
        'a', 129,
        'b', 99,
        'd', 98,
        'e', 91,
        'f', 24,
        'i', 83,
        'l', 100,
        'n', 25,
        'r', 105,
        's', 65,
        't', 26,
        'u', 30,
        '{', 169,
        '}', 170,
        '+', 8,
        '-', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 166,
        '(', 178,
        ')', 179,
        ',', 175,
        '/', 4,
        ';', 161,
        '=', 172,
        ']', 225,
        '}', 170,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(313);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '.', 153,
        '0', 294,
        'f', 237,
        'i', 262,
        'n', 239,
        't', 277,
        '+', 8,
        '-', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '0') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '.', 163,
        '/', 314,
        '0', 296,
        ';', 161,
        '[', 224,
        'b', 273,
        'd', 268,
        'f', 259,
        'i', 263,
        'l', 271,
        's', 251,
        'u', 240,
        '+', 11,
        '-', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(296);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(212);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(218);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(216);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(220);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 146:
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 151:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 152:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '"', 2,
        '\'', 3,
        '(', 178,
        ')', 179,
        ',', 175,
        '.', 153,
        '/', 4,
        '0', 294,
        ';', 161,
        '=', 172,
        '[', 224,
        ']', 225,
        'a', 129,
        'e', 91,
        'f', 23,
        'i', 90,
        'n', 25,
        'r', 105,
        's', 135,
        't', 26,
        'u', 84,
        '{', 169,
        '}', 170,
        '+', 8,
        '-', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == '6') ADVANCE(232);
      if (lookahead == '8') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(236);
      if (lookahead == '3') ADVANCE(230);
      if (lookahead == '6') ADVANCE(233);
      if (lookahead == '8') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(231);
      if (lookahead == '6') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_string_constant);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(272);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_integer_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_integer_constant_token2);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_integer_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_float_constant_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_float_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_float_constant_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_float_constant_token3);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_float_constant_token3);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(312);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 158},
  [9] = {.lex_state = 158},
  [10] = {.lex_state = 158},
  [11] = {.lex_state = 158},
  [12] = {.lex_state = 158},
  [13] = {.lex_state = 158},
  [14] = {.lex_state = 158},
  [15] = {.lex_state = 158},
  [16] = {.lex_state = 158},
  [17] = {.lex_state = 158},
  [18] = {.lex_state = 158},
  [19] = {.lex_state = 158},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 158},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 158},
  [24] = {.lex_state = 158},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 158},
  [28] = {.lex_state = 158},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 158},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 158},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 158},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 158},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 158},
  [66] = {.lex_state = 158},
  [67] = {.lex_state = 158},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 158},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 310},
  [158] = {.lex_state = 158},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 158},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 158},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 310},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [aux_sym_integer_constant_token1] = ACTIONS(1),
    [aux_sym_integer_constant_token2] = ACTIONS(1),
    [aux_sym_float_constant_token1] = ACTIONS(1),
    [aux_sym_float_constant_token2] = ACTIONS(1),
    [aux_sym_float_constant_token3] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_schema] = STATE(151),
    [sym_include] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym_attribute] = STATE(3),
    [sym_table_struct] = STATE(3),
    [sym_enum_union] = STATE(3),
    [sym_root_type] = STATE(3),
    [sym_rpc_service] = STATE(3),
    [sym_object] = STATE(3),
    [sym_file_extension] = STATE(3),
    [sym_file_identifier] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_schema_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_attribute] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(17),
    [anon_sym_root_type] = ACTIONS(19),
    [anon_sym_rpc_service] = ACTIONS(21),
    [anon_sym_file_extension] = ACTIONS(23),
    [anon_sym_file_identifier] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(36), 1,
      anon_sym_namespace,
    ACTIONS(39), 1,
      anon_sym_attribute,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_union,
    ACTIONS(54), 1,
      anon_sym_root_type,
    ACTIONS(57), 1,
      anon_sym_rpc_service,
    ACTIONS(60), 1,
      anon_sym_file_extension,
    ACTIONS(63), 1,
      anon_sym_file_identifier,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(42), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(2), 12,
      sym_include,
      sym_namespace,
      sym_attribute,
      sym_table_struct,
      sym_enum_union,
      sym_root_type,
      sym_rpc_service,
      sym_object,
      sym_file_extension,
      sym_file_identifier,
      sym_comment,
      aux_sym_schema_repeat1,
  [58] = 15,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_attribute,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_root_type,
    ACTIONS(21), 1,
      anon_sym_rpc_service,
    ACTIONS(23), 1,
      anon_sym_file_extension,
    ACTIONS(25), 1,
      anon_sym_file_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(2), 12,
      sym_include,
      sym_namespace,
      sym_attribute,
      sym_table_struct,
      sym_enum_union,
      sym_root_type,
      sym_rpc_service,
      sym_object,
      sym_file_extension,
      sym_file_identifier,
      sym_comment,
      aux_sym_schema_repeat1,
  [116] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_type,
    ACTIONS(74), 23,
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
      sym_ident,
  [148] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym_type,
    ACTIONS(74), 23,
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
      sym_ident,
  [180] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_type,
    ACTIONS(74), 23,
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
      sym_ident,
  [212] = 1,
    ACTIONS(78), 18,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_COMMA,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_RBRACK,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [233] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(95), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [276] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_scalar,
    STATE(128), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [319] = 1,
    ACTIONS(96), 18,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_COMMA,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_RBRACK,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [340] = 1,
    ACTIONS(98), 18,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_COMMA,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_RBRACK,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [361] = 1,
    ACTIONS(100), 18,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_COMMA,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_RBRACK,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [382] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_scalar,
    STATE(128), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [425] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(105), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [465] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(128), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [505] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(124), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(106), 2,
      sym_object,
      sym_single_value,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [545] = 1,
    ACTIONS(104), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [564] = 1,
    ACTIONS(106), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [583] = 1,
    ACTIONS(108), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [601] = 1,
    ACTIONS(110), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [619] = 1,
    ACTIONS(112), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [637] = 1,
    ACTIONS(114), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [655] = 1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [673] = 1,
    ACTIONS(118), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [691] = 1,
    ACTIONS(120), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [709] = 1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [727] = 1,
    ACTIONS(124), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [745] = 1,
    ACTIONS(126), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [763] = 1,
    ACTIONS(128), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [781] = 1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [799] = 1,
    ACTIONS(132), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [817] = 1,
    ACTIONS(134), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [835] = 1,
    ACTIONS(136), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [853] = 1,
    ACTIONS(138), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [871] = 1,
    ACTIONS(140), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [889] = 1,
    ACTIONS(142), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_rpc_service,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [907] = 7,
    ACTIONS(90), 1,
      aux_sym_float_constant_token2,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(88), 2,
      aux_sym_float_constant_token1,
      aux_sym_float_constant_token3,
    ACTIONS(146), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_enum_field_name,
      sym_scalar,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [935] = 8,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(117), 1,
      sym_single_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [965] = 8,
    ACTIONS(84), 1,
      sym_string_constant,
    ACTIONS(88), 1,
      aux_sym_float_constant_token1,
    STATE(75), 1,
      sym_scalar,
    STATE(107), 1,
      sym_single_value,
    ACTIONS(86), 2,
      aux_sym_integer_constant_token1,
      aux_sym_integer_constant_token2,
    ACTIONS(90), 2,
      aux_sym_float_constant_token2,
      aux_sym_float_constant_token3,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 3,
      sym_integer_constant,
      sym_float_constant,
      sym_boolean_constant,
  [995] = 7,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(47), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1019] = 7,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(46), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1043] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(46), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1067] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(46), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1091] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(43), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1115] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(42), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1139] = 7,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      sym_ident,
    ACTIONS(178), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(46), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1163] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(46), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1187] = 1,
    ACTIONS(188), 9,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1199] = 7,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(41), 3,
      sym_enum_field,
      sym_comment,
      aux_sym_enum_union_repeat1,
  [1223] = 1,
    ACTIONS(190), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1234] = 1,
    ACTIONS(192), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1245] = 1,
    ACTIONS(194), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1256] = 1,
    ACTIONS(196), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1267] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_EQ,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_metadata,
    STATE(135), 1,
      sym_comment,
  [1289] = 6,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1309] = 5,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym_ident,
    STATE(59), 3,
      sym_table_field,
      sym_comment,
      aux_sym_table_struct_repeat1,
  [1327] = 5,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      sym_ident,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(59), 3,
      sym_table_field,
      sym_comment,
      aux_sym_table_struct_repeat1,
  [1345] = 6,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1365] = 5,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 3,
      sym_table_field,
      sym_comment,
      aux_sym_table_struct_repeat1,
  [1383] = 5,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      sym_ident,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_table_field,
      sym_comment,
      aux_sym_table_struct_repeat1,
  [1401] = 6,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1421] = 5,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      sym_ident,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(57), 3,
      sym_table_field,
      sym_comment,
      aux_sym_table_struct_repeat1,
  [1439] = 6,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1459] = 6,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1479] = 1,
    ACTIONS(225), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1489] = 1,
    ACTIONS(227), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1499] = 6,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_metadata,
    STATE(162), 1,
      sym_comment,
  [1518] = 2,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(231), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1529] = 5,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_enum_field_name,
    STATE(71), 2,
      sym_enum_field,
      sym_comment,
  [1546] = 1,
    ACTIONS(235), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1554] = 1,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1562] = 1,
    ACTIONS(106), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1570] = 1,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1578] = 3,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      sym_ident,
    STATE(79), 2,
      sym_rpc_method,
      aux_sym_rpc_service_repeat1,
  [1589] = 1,
    ACTIONS(241), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1596] = 1,
    ACTIONS(243), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1603] = 1,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1610] = 4,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_comment,
  [1623] = 3,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      sym_ident,
    STATE(79), 2,
      sym_rpc_method,
      aux_sym_rpc_service_repeat1,
  [1634] = 1,
    ACTIONS(254), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1641] = 1,
    ACTIONS(256), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1648] = 1,
    ACTIONS(258), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1655] = 4,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_metadata_repeat1,
  [1668] = 1,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1675] = 1,
    ACTIONS(268), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1682] = 1,
    ACTIONS(270), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1689] = 1,
    ACTIONS(272), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1696] = 1,
    ACTIONS(274), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1703] = 4,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(168), 1,
      sym_comment,
  [1716] = 1,
    ACTIONS(278), 4,
      anon_sym_RBRACE,
      sym_ident,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1723] = 1,
    ACTIONS(280), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1730] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_metadata_repeat1,
  [1740] = 2,
    ACTIONS(239), 1,
      sym_ident,
    STATE(74), 2,
      sym_rpc_method,
      aux_sym_rpc_service_repeat1,
  [1748] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_metadata_repeat1,
  [1758] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_value_repeat1,
  [1768] = 3,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_object_repeat1,
  [1778] = 1,
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1784] = 1,
    ACTIONS(300), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1790] = 3,
    ACTIONS(86), 1,
      aux_sym_integer_constant_token1,
    ACTIONS(302), 1,
      aux_sym_integer_constant_token2,
    STATE(70), 1,
      sym_integer_constant,
  [1800] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_metadata,
  [1810] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_value_repeat1,
  [1820] = 3,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym_namespace_repeat1,
  [1830] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_metadata,
  [1840] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_metadata,
  [1850] = 3,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_object_repeat1,
  [1860] = 1,
    ACTIONS(323), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1866] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_metadata_repeat1,
  [1876] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_metadata,
  [1886] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1894] = 3,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_namespace_repeat1,
  [1904] = 3,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_metadata_repeat1,
  [1914] = 1,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1920] = 3,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym_namespace_repeat1,
  [1930] = 1,
    ACTIONS(347), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1936] = 3,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_value_repeat1,
  [1946] = 3,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_object_repeat1,
  [1956] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1961] = 2,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      sym_ident,
  [1968] = 1,
    ACTIONS(342), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [1973] = 2,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      sym_ident,
  [1980] = 2,
    ACTIONS(362), 1,
      sym_ident,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1987] = 2,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      sym_ident,
  [1994] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      sym_ident,
  [2001] = 1,
    ACTIONS(370), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2006] = 2,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym_ident,
  [2013] = 2,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      sym_ident,
  [2020] = 1,
    ACTIONS(376), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2025] = 1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2030] = 2,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      sym_ident,
  [2037] = 1,
    ACTIONS(378), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2042] = 2,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_ident,
  [2049] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [2053] = 1,
    ACTIONS(386), 1,
      aux_sym_comment_token2,
  [2057] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
  [2061] = 1,
    ACTIONS(247), 1,
      anon_sym_SEMI,
  [2065] = 1,
    ACTIONS(362), 1,
      sym_ident,
  [2069] = 1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [2073] = 1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
  [2077] = 1,
    ACTIONS(394), 1,
      anon_sym_SLASH,
  [2081] = 1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [2085] = 1,
    ACTIONS(398), 1,
      anon_sym_COLON,
  [2089] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [2093] = 1,
    ACTIONS(360), 1,
      sym_ident,
  [2097] = 1,
    ACTIONS(402), 1,
      sym_ident,
  [2101] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2105] = 1,
    ACTIONS(406), 1,
      sym_ident,
  [2109] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [2113] = 1,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [2117] = 1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2121] = 1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2125] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [2129] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
  [2133] = 1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
  [2137] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [2141] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [2145] = 1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2149] = 1,
    ACTIONS(428), 1,
      aux_sym_comment_token1,
  [2153] = 1,
    ACTIONS(430), 1,
      sym_string_constant,
  [2157] = 1,
    ACTIONS(432), 1,
      sym_ident,
  [2161] = 1,
    ACTIONS(434), 1,
      sym_string_constant,
  [2165] = 1,
    ACTIONS(436), 1,
      sym_ident,
  [2169] = 1,
    ACTIONS(276), 1,
      anon_sym_SEMI,
  [2173] = 1,
    ACTIONS(438), 1,
      sym_ident,
  [2177] = 1,
    ACTIONS(440), 1,
      sym_ident,
  [2181] = 1,
    ACTIONS(442), 1,
      sym_ident,
  [2185] = 1,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [2189] = 1,
    ACTIONS(446), 1,
      sym_ident,
  [2193] = 1,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [2197] = 1,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
  [2201] = 1,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [2205] = 1,
    ACTIONS(454), 1,
      sym_ident,
  [2209] = 1,
    ACTIONS(456), 1,
      sym_string_constant,
  [2213] = 1,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
  [2217] = 1,
    ACTIONS(460), 1,
      sym_ident,
  [2221] = 1,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
  [2225] = 1,
    ACTIONS(464), 1,
      anon_sym_SLASH,
  [2229] = 1,
    ACTIONS(466), 1,
      aux_sym_comment_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 212,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 382,
  [SMALL_STATE(14)] = 425,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 564,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 601,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 637,
  [SMALL_STATE(23)] = 655,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 691,
  [SMALL_STATE(26)] = 709,
  [SMALL_STATE(27)] = 727,
  [SMALL_STATE(28)] = 745,
  [SMALL_STATE(29)] = 763,
  [SMALL_STATE(30)] = 781,
  [SMALL_STATE(31)] = 799,
  [SMALL_STATE(32)] = 817,
  [SMALL_STATE(33)] = 835,
  [SMALL_STATE(34)] = 853,
  [SMALL_STATE(35)] = 871,
  [SMALL_STATE(36)] = 889,
  [SMALL_STATE(37)] = 907,
  [SMALL_STATE(38)] = 935,
  [SMALL_STATE(39)] = 965,
  [SMALL_STATE(40)] = 995,
  [SMALL_STATE(41)] = 1019,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1067,
  [SMALL_STATE(44)] = 1091,
  [SMALL_STATE(45)] = 1115,
  [SMALL_STATE(46)] = 1139,
  [SMALL_STATE(47)] = 1163,
  [SMALL_STATE(48)] = 1187,
  [SMALL_STATE(49)] = 1199,
  [SMALL_STATE(50)] = 1223,
  [SMALL_STATE(51)] = 1234,
  [SMALL_STATE(52)] = 1245,
  [SMALL_STATE(53)] = 1256,
  [SMALL_STATE(54)] = 1267,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1327,
  [SMALL_STATE(58)] = 1345,
  [SMALL_STATE(59)] = 1365,
  [SMALL_STATE(60)] = 1383,
  [SMALL_STATE(61)] = 1401,
  [SMALL_STATE(62)] = 1421,
  [SMALL_STATE(63)] = 1439,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1479,
  [SMALL_STATE(66)] = 1489,
  [SMALL_STATE(67)] = 1499,
  [SMALL_STATE(68)] = 1518,
  [SMALL_STATE(69)] = 1529,
  [SMALL_STATE(70)] = 1546,
  [SMALL_STATE(71)] = 1554,
  [SMALL_STATE(72)] = 1562,
  [SMALL_STATE(73)] = 1570,
  [SMALL_STATE(74)] = 1578,
  [SMALL_STATE(75)] = 1589,
  [SMALL_STATE(76)] = 1596,
  [SMALL_STATE(77)] = 1603,
  [SMALL_STATE(78)] = 1610,
  [SMALL_STATE(79)] = 1623,
  [SMALL_STATE(80)] = 1634,
  [SMALL_STATE(81)] = 1641,
  [SMALL_STATE(82)] = 1648,
  [SMALL_STATE(83)] = 1655,
  [SMALL_STATE(84)] = 1668,
  [SMALL_STATE(85)] = 1675,
  [SMALL_STATE(86)] = 1682,
  [SMALL_STATE(87)] = 1689,
  [SMALL_STATE(88)] = 1696,
  [SMALL_STATE(89)] = 1703,
  [SMALL_STATE(90)] = 1716,
  [SMALL_STATE(91)] = 1723,
  [SMALL_STATE(92)] = 1730,
  [SMALL_STATE(93)] = 1740,
  [SMALL_STATE(94)] = 1748,
  [SMALL_STATE(95)] = 1758,
  [SMALL_STATE(96)] = 1768,
  [SMALL_STATE(97)] = 1778,
  [SMALL_STATE(98)] = 1784,
  [SMALL_STATE(99)] = 1790,
  [SMALL_STATE(100)] = 1800,
  [SMALL_STATE(101)] = 1810,
  [SMALL_STATE(102)] = 1820,
  [SMALL_STATE(103)] = 1830,
  [SMALL_STATE(104)] = 1840,
  [SMALL_STATE(105)] = 1850,
  [SMALL_STATE(106)] = 1860,
  [SMALL_STATE(107)] = 1866,
  [SMALL_STATE(108)] = 1876,
  [SMALL_STATE(109)] = 1886,
  [SMALL_STATE(110)] = 1894,
  [SMALL_STATE(111)] = 1904,
  [SMALL_STATE(112)] = 1914,
  [SMALL_STATE(113)] = 1920,
  [SMALL_STATE(114)] = 1930,
  [SMALL_STATE(115)] = 1936,
  [SMALL_STATE(116)] = 1946,
  [SMALL_STATE(117)] = 1956,
  [SMALL_STATE(118)] = 1961,
  [SMALL_STATE(119)] = 1968,
  [SMALL_STATE(120)] = 1973,
  [SMALL_STATE(121)] = 1980,
  [SMALL_STATE(122)] = 1987,
  [SMALL_STATE(123)] = 1994,
  [SMALL_STATE(124)] = 2001,
  [SMALL_STATE(125)] = 2006,
  [SMALL_STATE(126)] = 2013,
  [SMALL_STATE(127)] = 2020,
  [SMALL_STATE(128)] = 2025,
  [SMALL_STATE(129)] = 2030,
  [SMALL_STATE(130)] = 2037,
  [SMALL_STATE(131)] = 2042,
  [SMALL_STATE(132)] = 2049,
  [SMALL_STATE(133)] = 2053,
  [SMALL_STATE(134)] = 2057,
  [SMALL_STATE(135)] = 2061,
  [SMALL_STATE(136)] = 2065,
  [SMALL_STATE(137)] = 2069,
  [SMALL_STATE(138)] = 2073,
  [SMALL_STATE(139)] = 2077,
  [SMALL_STATE(140)] = 2081,
  [SMALL_STATE(141)] = 2085,
  [SMALL_STATE(142)] = 2089,
  [SMALL_STATE(143)] = 2093,
  [SMALL_STATE(144)] = 2097,
  [SMALL_STATE(145)] = 2101,
  [SMALL_STATE(146)] = 2105,
  [SMALL_STATE(147)] = 2109,
  [SMALL_STATE(148)] = 2113,
  [SMALL_STATE(149)] = 2117,
  [SMALL_STATE(150)] = 2121,
  [SMALL_STATE(151)] = 2125,
  [SMALL_STATE(152)] = 2129,
  [SMALL_STATE(153)] = 2133,
  [SMALL_STATE(154)] = 2137,
  [SMALL_STATE(155)] = 2141,
  [SMALL_STATE(156)] = 2145,
  [SMALL_STATE(157)] = 2149,
  [SMALL_STATE(158)] = 2153,
  [SMALL_STATE(159)] = 2157,
  [SMALL_STATE(160)] = 2161,
  [SMALL_STATE(161)] = 2165,
  [SMALL_STATE(162)] = 2169,
  [SMALL_STATE(163)] = 2173,
  [SMALL_STATE(164)] = 2177,
  [SMALL_STATE(165)] = 2181,
  [SMALL_STATE(166)] = 2185,
  [SMALL_STATE(167)] = 2189,
  [SMALL_STATE(168)] = 2193,
  [SMALL_STATE(169)] = 2197,
  [SMALL_STATE(170)] = 2201,
  [SMALL_STATE(171)] = 2205,
  [SMALL_STATE(172)] = 2209,
  [SMALL_STATE(173)] = 2213,
  [SMALL_STATE(174)] = 2217,
  [SMALL_STATE(175)] = 2221,
  [SMALL_STATE(176)] = 2225,
  [SMALL_STATE(177)] = 2229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_type, 3, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 8, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_struct, 6, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_struct, 5, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 7, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_service, 5, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 6, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 9, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_union, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_struct, 4, 0, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_union_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_union_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_union_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_union_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_union_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field_name, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_struct_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 7, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 4, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_service_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_service_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 7, 0, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 6, 0, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 8, 0, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 6, 0, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 5, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 6, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 4, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [416] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
