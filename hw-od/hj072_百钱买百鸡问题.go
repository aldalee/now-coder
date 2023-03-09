package main

import "fmt"

func main() {
	n := 0
	fmt.Scan(&n)
	for i := 0; i <= 20; i++ { //i,j,k代表数量
		for j := 0; j <= 33; j++ {
			for k := 0; k <= 100; k++ {
				if i+j+k == 100 && 5*i+3*j+k/3 == 100 && k%3 == 0 {
					fmt.Println(i, j, k)
				}
			}
		}
	}
}
