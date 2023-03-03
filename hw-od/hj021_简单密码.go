package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	str, _, _ := bufio.NewReader(os.Stdin).ReadLine()
	m := map[string]int{"abc": 2, "def": 3, "ghi": 4, "jkl": 5, "mno": 6, "pqrs": 7, "tuv": 8, "wxyz": 9}
	for _, s := range str {
		if s >= '0' && s <= '9' {
			fmt.Print(string(s))
		} else if s >= 'A' && s <= 'Z' {
			fmt.Print(string((s-'A'+1)%26 + 'A' + 32))
		}
		for k, v := range m {
			if strings.Contains(k, string(s)) {
				fmt.Print(v)
				break
			}
		}
	}
}
