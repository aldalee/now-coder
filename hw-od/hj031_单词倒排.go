package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"unicode"
)

func main() {
	str, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	for _, s := range str {
		if !unicode.IsLetter(s) {
			str = strings.Replace(str, string(s), " ", -1)
		}
	}
	words := strings.Split(strings.TrimSpace(str), " ")
	for i := len(words) - 1; i >= 0; i-- {
		fmt.Printf("%s ", words[i])
	}
}
