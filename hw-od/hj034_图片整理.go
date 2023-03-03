package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	str, _, _ := bufio.NewReader(os.Stdin).ReadLine()
	sort.Slice(str, func(i, j int) bool {
		return str[i] < str[j]
	})
	fmt.Println(string(str))
}
