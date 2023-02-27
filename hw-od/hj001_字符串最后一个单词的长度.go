package main

import "fmt"

func main() {
	var s string
	for {
		_, err := fmt.Scanf("%s", &s)
		if err != nil {
			break
		}
	}
	fmt.Println(len(s))
}
