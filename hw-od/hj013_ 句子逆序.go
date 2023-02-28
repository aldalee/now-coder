package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	sc := bufio.NewScanner(os.Stdin)
	for sc.Scan() {
		ans := strings.Split(sc.Text(), " ")
		for i := len(ans) - 1; i >= 0; i-- {
			fmt.Printf("%s ", ans[i])
		}
	}
}
