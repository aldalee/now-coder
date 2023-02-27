package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s, _, _ := bufio.NewReader(os.Stdin).ReadLine()
	for len(s)%8 != 0 {
		s = append(s, '0')
	}
	for i := 0; i < len(s)/8; i++ {
		fmt.Println(string(s[i*8 : i*8+8]))
	}
}
