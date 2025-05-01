package types

import (
	"go/importer"
	"go/types"

	"github.com/smtx/smtv/ast"
	"github.com/smtx/smtv/utils"
)

func CheckSourceFile(sf *ast.SourceFile) (*types.Package, error) {
	// A Config controls various options of the type checker.
	// The defaults work fine except for one setting:
	// we must specify how to deal with imports.
	conf := types.Config{Importer: importer.Default()}

	// sf.Fset.Iterate(func(f *token.File) bool {
	// 	fmt.Printf("File: %s\n", f.Name())
	// 	fmt.Printf("Line: %d\n", f.Line(1))
	// 	fmt.Printf("Size: %d\n", f.Size())
	// 	fmt.Printf("Lines: %d\n", f.Lines())
	// 	fmt.Printf("PosFor: %d\n", f.PositionFor(100, true))
	// 	return true
	// })

	// great for debugging
	pos := sf.Fset.Position(95)

	print(utils.FormatError(sf.Fset, &pos, "unknown identifier declared"))
	print(utils.FormatWarning(sf.Fset, &pos, "unused identifier declared"))

	// Type-check the package containing only file sf.Ast.
	// Check returns a *types.Package.
	return conf.Check("smtx", sf.Fset, []*ast.File{sf.Ast}, nil)
}
