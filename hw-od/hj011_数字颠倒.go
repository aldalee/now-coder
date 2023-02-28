package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	if n == 0 {
		fmt.Println(0)
		return
	}
	for n > 0 {
		fmt.Print(n % 10)
		n /= 10
	}
}
