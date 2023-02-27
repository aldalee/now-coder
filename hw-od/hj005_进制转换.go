package main

import "fmt"

func main() {
	n := 0
	//二进制：%b	八进制：%o	十六进制：%x
	fmt.Scanf("0x%x", &n)
	fmt.Println(n)
}
