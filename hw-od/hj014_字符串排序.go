package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	var s string
	var str []string
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&s)
		str = append(str, s)
	}
	sort.Strings(str)
	for _, s := range str {
		fmt.Println(s)
	}
}
