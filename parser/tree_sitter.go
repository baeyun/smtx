package parser

import (
	"fmt"
	"os"

	"unsafe"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

// #cgo CFLAGS: -std=c11 -fPIC
// #include "./src/parser.c"
// #include "./src/scanner.c"
import "C"

// Get the tree-sitter Language for this grammar.
func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_toml())
}

func TreeSitterParser(src *Source) {
	// code := []byte("const foo = 1 + 2")
	code, err := os.ReadFile(src.Path)
	if err != nil {
		fmt.Printf("Error reading file %s: %v\n", src.Path, err)
		return
	}

	parser := tree_sitter.NewParser()
	defer parser.Close()
	parser.SetLanguage(tree_sitter.NewLanguage(Language()))

	tree := parser.Parse(code, nil)
	defer tree.Close()

	root := tree.RootNode()
	fmt.Println(root.ToSexp())
}
