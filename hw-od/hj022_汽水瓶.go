package main

import "fmt"

func main() {
	var n int
	for {
		fmt.Scan(&n)
		if n == 0 {
			break
		}
		//每两个空瓶+借的一个空瓶可以换一瓶汽水，再将空瓶还回去
		//相当于每两个空瓶换一瓶汽水
		fmt.Println(n / 2)
	}
}
