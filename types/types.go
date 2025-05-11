package types

import (
	"go/importer"
	"go/types"

	"github.com/smtx/ast"
	"github.com/smtx/config"
)

func CheckSourceFile(sf *ast.SourceFile) (*types.Package, error) {
	// A Config controls various options of the type checker.
	// The defaults work fine except for one setting:
	// we must specify how to deal with imports.
	conf := types.Config{Importer: importer.Default()}

	// Type-check the package containing only file sf.Ast.
	// Check returns a *types.Package.
	return conf.Check(config.PKGNAME, sf.Fset, []*ast.File{sf.Ast}, nil)
}
