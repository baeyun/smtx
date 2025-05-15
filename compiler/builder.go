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

func BuildMainFunction(stmts *[]ast.Stmt) *ast.FuncDecl {
	if stmts == nil {
		stmts = &[]ast.Stmt{}
	}

	return &ast.FuncDecl{
		Name: &ast.Ident{Name: "main"},
		Type: &ast.FuncType{Params: &ast.FieldList{}},
		Body: &ast.BlockStmt{
			List: *stmts,
		},
	}
}

func BuildCommands(src *[]byte, root *ts.Node) []ast.Stmt {
	var stmts []ast.Stmt
	cursor := root.Walk()

	defer cursor.Close()

	for _, node := range root.Children(cursor) {
		// println(parser.GetSrcByRange(*src, node.NamedChild(0)))
		if namedChild := node.NamedChild(0); namedChild != nil {
			switch namedChild.Kind() {
			case "symbol":
				// stmts = append(stmts, BuildCallExpr(&node))
				// println(namedChild.Kind())
			case "term":
				// println(namedChild.NamedChild(0).Kind())
				// println(parser.GetSrcByRange(*src, namedChild))
				// println(parser.GetSrcByRange(*src, namedChild.Child(0)))
				// println(parser.GetSrcByRange(*src, namedChild.NamedChild(0)))
				// stmts = append(stmts, BuildCallExpr(&node))
			default:
				fmt.Printf("Unknown node: %s\n", namedChild.Kind())
			}
		} else {
			// @TODO: test: unnamed, probably a call expression
			stmts = append(stmts, BuildCallExpr(&node))
		}
	}

	return stmts
}

func BuildCallExpr(node *ts.Node) ast.Stmt {
	funcExprName := utils.ToPascalCase(node.Child(1).Kind())

	return &ast.ExprStmt{
		X: &ast.CallExpr{
			Fun: &ast.Ident{
				Name:    funcExprName,
				NamePos: token.Pos(node.StartByte()),
			},
		},
	}
}
