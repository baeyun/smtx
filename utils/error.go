package utils

import (
	"fmt"
	"go/token"
	"strings"

	"github.com/fatih/color"
)

func FormatError(fset *token.FileSet, pos *token.Position, msg string) string {
	return FormatDiagnostic(fset, pos, msg, false)
}

func FormatWarning(fset *token.FileSet, pos *token.Position, msg string) string {
	return FormatDiagnostic(fset, pos, msg, true)
}

func FormatDiagnostic(fset *token.FileSet, pos *token.Position, msg string, isWarning bool) string {
	var sb strings.Builder

	// Write error header
	if isWarning {
		sb.WriteString(color.YellowString("warning"))
	} else {
		sb.WriteString(color.RedString("error"))
	}
	sb.WriteString(fmt.Sprintf(": %s\n", msg))

	// Write file location
	sb.WriteString(color.BlueString(fmt.Sprintf("  --> %s\n", pos)))

	// Add decoration line numbers and markers
	sb.WriteString(fmt.Sprintf("   %d | ", pos.Line))
	sb.WriteString("(set-option :print-success false)\n")
	sb.WriteString(fmt.Sprintf("   %d | ", pos.Line))
	sb.WriteString(strings.Repeat(" ", pos.Column-1))

	// Add error pointer
	if isWarning {
		sb.WriteString(color.YellowString("^"))
	} else {
		sb.WriteString(color.RedString("^"))
	}

	sb.WriteString("\n")

	return sb.String()
}

// Output will look like:
// error: unknown identifier declared
//   --> ./tests/hello.go:10:13
//    10 | (set-option :print-success false)
//    10 |             ^
