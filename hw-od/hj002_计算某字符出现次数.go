package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	str, _ := r.ReadString('\n')
	ch, _ := r.ReadString('\n')
	n := 0
	for _, s := range str {
		if strings.EqualFold(string(ch[0]), string(s)) {
			n++
		}
	}
	fmt.Println(n)
}
