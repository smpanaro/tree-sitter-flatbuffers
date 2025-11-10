; Copied from smpanaro/zed-flatbuffers
; Keywords
["namespace" "include" "attribute" "table" "struct" "enum" "union" "root_type" "rpc_service"] @keyword

; Types
(scalar_type) @type

; Constants
(boolean_constant) @boolean
(integer_constant) @number
(float_constant) @number

; Strings
(string_constant) @string

; Comments
(comment) @comment

; Punctuation
["(" ")" "[" "]" "{" "}"] @punctuation.bracket
[":" "," ";"] @punctuation.delimiter

; Operators
"=" @operator

; Attributes
(custom_attribute name: (ident) @attribute)
(attribute name: (ident) @attribute)

; Tables/Structs
(table (ident) @type)
(table_field
  name: (ident) @field
  type: (ident) @type)

(struct (ident) @type)
(struct_field
  name: (ident) @field
  type: (ident) @type)

; Enums/Unions
(enum name: (ident) @type)
(enum_field name: (ident) @variant)

(union name: (ident) @type)
(union_field
    alias: (ident) @variant
    type: (ident) @type)

; RPCs
(rpc_service (ident) @type)
(rpc_method
    name: (ident) @function
    request: (ident) @type
    response: (ident) @type)

; Special
(file_extension "file_extension" @keyword)
(file_identifier "file_identifier" @keyword)
(root_type (ident) @type)
