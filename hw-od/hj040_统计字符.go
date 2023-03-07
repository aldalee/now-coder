package main

import (
	"bufio"
	"fmt"
	"os"
	"unicode"
)

func main() {
	str, _, _ := bufio.NewReader(os.Stdin).ReadLine()
	count := [4]int{}
	for _, r := range string(str) {
		switch {
		case unicode.IsLetter(r):
			count[0]++
		case unicode.IsSpace(r):
			count[1]++
		case unicode.IsDigit(r):
			count[2]++
		default:
			count[3]++
		}
	}
	for _, c := range count {
		fmt.Println(c)
	}
}
