package utils

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
)

// ReadFile opens a file and returns its content as a byte slice.
// Remember to close the file after use.
func ReadFile(filename string) *os.File {
	file, err := os.Open(filename)
	if err != nil {
		fmt.Printf("Error opening file %s: %v\n", filename, err)
	}
	// defer file.Close()
	return file
}

func ReadFileBytes(filename string) []byte {
	data, err := os.ReadFile(filename)
	if err != nil {
		fmt.Printf("Error opening file %s: %v\n", filename, err)
	}
	return data
}

// @TODO improve matching of files
func GetFilesToCheck(files []string) []*string {
	var matches []*string
	for _, filepath := range files {
		// if the path is a glob
		if strings.Contains(filepath, "*") {
			glob, err := FindMatchingFiles(".", filepath)
			if err != nil {
				fmt.Println("Error:", err)
			}
			for _, g := range glob {
				matches = append(matches, &g)
			}
		} else {
			matches = append(matches, &filepath)
		}
	}
	return matches
}

func FindMatchingFiles(root, pattern string) ([]string, error) {
	var matches []string
	err := filepath.Walk(root, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if info.IsDir() {
			return nil
		}
		if matched, err := filepath.Match(pattern, filepath.Base(path)); err != nil {
			return err
		} else if matched {
			matches = append(matches, path)
		}
		return nil
	})
	return matches, err
}
