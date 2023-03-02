package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"unicode"
)

func isValidString(str string) bool {
	if len(str) <= 8 {
		return false
	}
	var digit, upper, lower, other int
	for _, r := range str {
		switch {
		case unicode.IsDigit(r):
			digit = 1
		case unicode.IsUpper(r):
			upper = 1
		case unicode.IsLower(r):
			lower = 1
		default:
			other = 1
		}
	}
	if digit+upper+lower+other < 3 {
		return false
	}
	return true
}

func isSubString(str string) bool {
	for i := 0; i < len(str)-3; i++ {
		if len(strings.Split(str, str[i:i+3])) >= 3 {
			return false
		}
	}
	return true
}
func main() {
	sc := bufio.NewScanner(os.Stdin)
	for sc.Scan() {
		s := sc.Text()
		if isValidString(s) && isSubString(s) {
			fmt.Println("OK")
			continue
		}
		fmt.Println("NG")
	}
}
