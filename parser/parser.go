package parser

import (
	"unsafe"

	ts_toml "github.com/tree-sitter-grammars/tree-sitter-toml/bindings/go"
	ts "github.com/tree-sitter/go-tree-sitter"

	ast "github.com/smtx/smtv/ast"
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
func NewTreeSitterParser(sf *ast.SourceFile) {
	parser := ts.NewParser()
	defer parser.Close()
	parser.SetLanguage(ts.NewLanguage(Language()))

	tree := parser.Parse(sf.Src, nil)
	// defer tree.Close()

	sf.Parser = tree
}

// @IMPORTANT: Close the *ts.Tree after use to avoid memory leaks.
func NewTreeSitterParserToml(sf *ast.SourceFile) {
	parser := ts.NewParser()
	defer parser.Close()
	parser.SetLanguage(ts.NewLanguage(ts_toml.Language()))

	tree := parser.Parse(sf.Src, nil)
	// defer tree.Close()

	sf.Parser = tree
}
