package main

import "fmt"

func main() {
	var k int
	var str string
	fmt.Scan(&str)
	fmt.Scan(&k)
	fmt.Println(string([]rune(str)[:k]))
}
