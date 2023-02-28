package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	arr, count := [128]bool{}, 0
	for i := 0; i < len(s)-1; i++ {
		if !arr[s[i]] {
			count++
			arr[s[i]] = true
		}
	}
	fmt.Println(count)
}
