package types

import (
	"go/importer"
	"go/types"

	"github.com/smtx/ast"
)

func CheckSourceFile(sf *ast.SourceFile) (*types.Package, error) {
	// A Config controls various options of the type checker.
	// The defaults work fine except for one setting:
	// we must specify how to deal with imports.
	conf := types.Config{Importer: importer.Default()}

	// great for debugging
	// pos := sf.Fset.Position(95)

	// print(utils.FormatError(&sf.Src, &pos, "unknown identifier declared"))
	// print(utils.FormatWarning(&sf.Src, &pos, "unused identifier declared"))

	// Type-check the package containing only file sf.Ast.
	// Check returns a *types.Package.
	return conf.Check("smtx", sf.Fset, []*ast.File{sf.Ast}, nil)
}
