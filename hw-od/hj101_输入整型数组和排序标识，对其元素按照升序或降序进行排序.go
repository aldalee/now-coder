package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, sig int
	fmt.Scan(&n)
	arr := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}
	fmt.Scan(&sig)
	sort.Ints(arr)
	if sig == 0 {
		for i := 0; i < n; i++ {
			fmt.Printf("%d ", arr[i])
		}
	} else {
		for i := n - 1; i >= 0; i-- {
			fmt.Printf("%d ", arr[i])
		}
	}
}
