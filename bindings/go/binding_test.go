package tree_sitter_lhaskell_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lhaskell "github.com/tree-sitter/tree-sitter-lhaskell/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lhaskell.Language())
	if language == nil {
		t.Errorf("Error loading Lhaskell grammar")
	}
}
