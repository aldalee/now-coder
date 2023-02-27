package main

import (
	"fmt"
	"sort"
)

func main() {
	N := 0
	fmt.Scan(&N)
	num := make([]int, N+1)
	for i := 1; i <= N; i++ {
		fmt.Scan(&num[i])
	}
	sort.Ints(num)
	for i := 1; i <= N; i++ {
		if num[i] != num[i-1] {
			fmt.Println(num[i])
		}
	}
}
