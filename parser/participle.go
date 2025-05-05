package parser

import (
	"bytes"
	"fmt"

	"github.com/alecthomas/participle/v2"
	"github.com/alecthomas/participle/v2/lexer"
	"github.com/alecthomas/repr"

	ast "github.com/smtx/ast"
)

func NewParticipleParser(sf *ast.SourceFile) {
	toml, err := TomlParser.Parse("", bytes.NewReader(sf.Src))
	if err != nil {
		fmt.Printf("Parse error: %v\n", err)
		return
	}
	repr.String(toml)
	// repr.Println(toml)

	// We're no longer using the parsed result, but you can access it like this:
	// sf.PreAst = toml
}

type TOML struct {
	Pos lexer.Position

	Entries []*Entry `@@*`
}

type Entry struct {
	Field   *Field   `  @@`
	Section *Section `| @@`
}

type Field struct {
	Key   string `@Ident "="`
	Value *Value `@@`
}

type Value struct {
	String   *string  `  @String`
	DateTime *string  `| @DateTime`
	Date     *string  `| @Date`
	Time     *string  `| @Time`
	Bool     *bool    `| (@"true" | "false")`
	Number   *float64 `| @Number`
	List     []*Value `| "[" ( @@ ( "," @@ )* )? "]"`
}

type Section struct {
	Name   string   `"[" @(Ident ( "." Ident )*) "]"`
	Fields []*Field `@@*`
}

var (
	tomlLexer = lexer.MustSimple([]lexer.SimpleRule{
		{"DateTime", `\d\d\d\d-\d\d-\d\dT\d\d:\d\d:\d\d(\.\d+)?(-\d\d:\d\d)?`},
		{"Date", `\d\d\d\d-\d\d-\d\d`},
		{"Time", `\d\d:\d\d:\d\d(\.\d+)?`},
		{"Ident", `[a-zA-Z_][a-zA-Z_0-9]*`},
		{"String", `"[^"]*"`},
		{"Number", `[-+]?[.0-9]+\b`},
		{"Punct", `\[|]|[-!()+/*=,]`},
		{"comment", `#[^\n]+`},
		{"whitespace", `\s+`},
	})
	TomlParser = participle.MustBuild[TOML](
		participle.Lexer(tomlLexer),
		participle.Unquote("String"),
	)
)
