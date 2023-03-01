package main

import "fmt"

func main() {
	var num int
	var count int
	fmt.Scan(&num)
	for num != 0 {
		count += num & 1
		num = num >> 1
	}
	fmt.Println(count)
}
