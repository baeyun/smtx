package compiler

import "github.com/smtx/smtv/ast"

/**
 * @TODOs
 * - resolve fset and tree-sitter
 * - add new import logic
 */

func CompileProgram(config *ast.Config) {
	pkg := &ast.Script{
		Config: config,
		Files:  []*ast.SourceFile{},
	}

	for _, sf := range pkg.Files {
		CompileSourceFile(sf)
	}

}

func CompileSourceFile(sf *ast.SourceFile) {}
