package utils

import (
	"fmt"
	"go/token"
	"strings"

	"github.com/fatih/color"
)

// Output will look like:
// error: unknown identifier declared
//
//	--> ./tests/hello.go:10:13
//	 10 | (set-option :print-success false)
//	 10 |             ^
func FormatDiagnostic(src *[]byte, pos *token.Position, msg string, isWarning bool) string {
	var sb strings.Builder

	// Header
	if isWarning {
		sb.WriteString(color.YellowString("warning"))
	} else {
		sb.WriteString(color.RedString("error"))
	}
	sb.WriteString(fmt.Sprintf(": %s\n", msg))

	// Location
	sb.WriteString(color.BlueString(fmt.Sprintf("  --> %s\n", pos)))

	// Line numbers and markers
	sb.WriteString(fmt.Sprintf("   %d | ", pos.Line))
	sb.WriteString(fmt.Sprintf("%s\n", GetSrcStringByLine(*src, pos.Line)))
	sb.WriteString(fmt.Sprintf("   %d | ", pos.Line))
	sb.WriteString(strings.Repeat(" ", pos.Column-1))

	// Error pointer
	if isWarning {
		sb.WriteString(color.YellowString("^"))
	} else {
		sb.WriteString(color.RedString("^"))
	}

	sb.WriteString("\n")

	return sb.String()
}

func FormatError(src *[]byte, pos *token.Position, msg string) string {
	return FormatDiagnostic(src, pos, msg, false)
}

func FormatWarning(src *[]byte, pos *token.Position, msg string) string {
	return FormatDiagnostic(src, pos, msg, true)
}
