package main

import "fmt"

func main() {
	n := 0
	fmt.Scan(&n)
	m := map[int]int{}
	for n > 0 {
		num := n % 10
		_, ok := m[num]
		if !ok {
			fmt.Print(num)
			m[num]++
		}
		n = n / 10
	}
}
