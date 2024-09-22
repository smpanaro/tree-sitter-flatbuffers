package tree_sitter_flatbuffers_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_flatbuffers "github.com/tree-sitter/tree-sitter-flatbuffers/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_flatbuffers.Language())
	if language == nil {
		t.Errorf("Error loading Flatbuffers grammar")
	}
}
