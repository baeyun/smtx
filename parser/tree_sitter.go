package parser

import (
	"unsafe"

	ts_toml "github.com/tree-sitter-grammars/tree-sitter-toml/bindings/go"

	ts "github.com/tree-sitter/go-tree-sitter"
)

// #cgo LDFLAGS: -Wl,--allow-multiple-definition
// #cgo CFLAGS: -std=c11 -fPIC
// #include "./parser.c"
import "C"

// Get the tree-sitter Language for this grammar.
func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_smtlib2())
}

// @IMPORTANT: Close the *ts.Tree after use to avoid memory leaks.
func TreeSitterParser(src *Source) {
	parser := ts.NewParser()
	defer parser.Close()
	parser.SetLanguage(ts.NewLanguage(Language()))

	tree := parser.Parse(src.Src, nil)
	// defer tree.Close()

	src.PreAst = tree
}

// @IMPORTANT: Close the *ts.Tree after use to avoid memory leaks.
func TreeSitterParserToml(src *Source) {
	parser := ts.NewParser()
	defer parser.Close()
	parser.SetLanguage(ts.NewLanguage(ts_toml.Language()))

	tree := parser.Parse(src.Src, nil)
	// defer tree.Close()

	src.PreAst = tree
}
