package compiler

import (
	"fmt"
	p "go/parser"
	"go/token"
	"os"

	ts "github.com/tree-sitter/go-tree-sitter"

	"github.com/smtx/ast"
	"github.com/smtx/parser"
	"github.com/smtx/utils"
)

// @TODO: use: https://pkg.go.dev/golang.org/x/tools/go/ast/astutil

func BuildSourceFile(filename string) *ast.SourceFile {
	src := utils.ReadFileBytes(filename)
	sf := &ast.SourceFile{
		Src:    src,
		Parser: parser.NewParser(src),
	}
	return sf
}

func BuildSourceFileList(filenames []*string) []*ast.SourceFile {
	var sources []*ast.SourceFile
	for _, filename := range filenames {
		r, err := os.Open(*filename)
		if err != nil {
			fmt.Printf("Error opening file %s: %v\n", *filename, err)
			continue
		}
		defer r.Close()

		sources = append(sources, BuildSourceFile(*filename))
	}
	return sources
}

func BuildGoSourceFile(filename string) *ast.SourceFile {
	fset := token.NewFileSet()
	f, err := p.ParseFile(fset, filename, nil, 0)
	if err != nil {
		panic(fmt.Sprintf("Error parsing file %s: %v", filename, err))
	}

	sf := BuildSourceFile(filename)
	sf.Fset = fset
	sf.Ast = f

	return sf
}

func BuildMainFunction(body *ast.BlockStmt) *ast.FuncDecl {
	if body == nil {
		body = &ast.BlockStmt{}
	}

	return &ast.FuncDecl{
		Name: &ast.Ident{Name: "main"},
		Type: &ast.FuncType{Params: &ast.FieldList{}},
		Body: body,
	}
}

func BuildCommands(root *ts.Node) []ast.Decl {
	var decls []ast.Decl
	cursor := root.Walk()

	defer cursor.Close()

	for _, node := range root.Children(cursor) {
		if child := node.NamedChild(0); child != nil {
			println(child.Kind())
		} else {
			// no child
			println("no child")
		}
	}

	return decls
}

// func BuildCommandSimple(node *ts.Node) ast.Decl {
// 	name = utils.ReplaceHyphenWithUnderscore(node.Child(1).Kind())
// 	print("no child: ")
// 	println(name)

// 	return &ast.FuncDecl{
// 		Name: &ast.Ident{
// 			Name: name,
// 		},
// 		Type: &ast.FuncType{
// 			Params: &ast.FieldList{},
// 			Results: &ast.FieldList{},
// 		},
// 		Body: &ast.BlockStmt{},
// 	}
// }
