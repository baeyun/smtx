package ast

import (
	"go/ast"
	"go/token"

	ts "github.com/tree-sitter/go-tree-sitter"
)

type SourceFile struct {
	Src []byte
	// reference to Compiler.Fset
	Fset   *token.FileSet
	Ast    *ast.File
	Parser *ts.Tree
}

type (
	File = ast.File
)
