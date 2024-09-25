# tree-sitter-flatbuffers
[tree-sitter](https://tree-sitter.github.io/) grammar for [FlatBuffers](https://flatbuffers.dev)

# Development
Install the tree-sitter CLI:
- [official docs](https://tree-sitter.github.io/tree-sitter/creating-parsers#dependencies)
- `brew install tree-sitter`

```shell
# Edit the grammar
$ vim grammar.js
# Regenerate
$ tree-sitter generate
# Test
$ tree-sitter test
```
