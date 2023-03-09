package main

import "fmt"

func main() {
	n := 0
	fmt.Scan(&n)
	if n <= 2 {
		fmt.Println(-1)
		return
	}
	ans := []int{4, 2, 3, 2}
	fmt.Println(ans[(n-2)%4])
}
