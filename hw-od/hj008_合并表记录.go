package main

import (
	"fmt"
	"sort"
)

func main() {
	n := 0
	fmt.Scan(&n)
	m := map[int]int{}
	index, value := 0, 0
	for i := 0; i < n; i++ {
		fmt.Scan(&index, &value)
		m[index] += value
	}
	for _, k := range Sort(m) {
		fmt.Println(k, m[k])
	}
}
func Sort(m map[int]int) (keys []int) {
	for k, _ := range m {
		keys = append(keys, k)
	}
	sort.Ints(keys)
	return
}
