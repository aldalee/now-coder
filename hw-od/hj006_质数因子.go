package main

import "fmt"

func main() {
	n := 0
	fmt.Scan(&n)
	for i := 2; i*i <= n; i++ {
		for n%i == 0 { //能整除
			n /= i
			fmt.Printf("%d ", i)
		}
	}
	if n != 1 {
		fmt.Printf("%d ", n)
	}
}
