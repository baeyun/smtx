package utils

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
)

func GetFilesToCheck(files []string) []string {
	var matches []string
	for _, filepath := range files {
		// if the path is a glob
		if strings.Contains(filepath, "*") {
			glob, err := FindMatchingFiles(".", filepath)
			if err != nil {
				fmt.Println("Error:", err)
			}
			matches = append(matches, glob...)
		} else {
			matches = append(matches, filepath)
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
