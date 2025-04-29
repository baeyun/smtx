package types

import (
	"go/ast"
	"go/importer"
	"go/types"

	_ast "github.com/smtx/smtv/ast"
)

func TypeCheckSourceFile(sf *_ast.SourceFile) (*types.Package, error) {
	// A Config controls various options of the type checker.
	// The defaults work fine except for one setting:
	// we must specify how to deal with imports.
	conf := types.Config{Importer: importer.Default()}

	// Type-check the package containing only file sf.Ast.
	// Check returns a *types.Package.
	return conf.Check("cmd/hello", sf.Fset, []*ast.File{sf.Ast}, nil)
}
