package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	for i := 1; i <= n; i++ {
		for j := i; j <= n; j++ {
			//第一行的规律符合累加求和 (n+1)n/2 - 0
			//第二行的规律则是第一行的 (n+1)n/2 - 1
			//第三行的规律则是第一行的 (n+1)n/2 - 2
			//第四行的规律则是第一行的 (n+1)n/2 - 3
			fmt.Printf("%d ", j*(j+1)/2-i+1)
		}
		fmt.Println()
	}
}
