package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
	"strconv"
	"strings"
)

func main() {
	var x, y int
	input, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	for _, s := range strings.Split(input, ";") {
		matched, _ := regexp.MatchString("^[ASWD]\\d+$", s)
		if matched {
			k, _ := strconv.Atoi(s[1:])
			switch s[:1] {
			case "A":
				x -= k
			case "D":
				x += k
			case "S":
				y -= k
			case "W":
				y += k
			}
		}
	}
	fmt.Printf("%d,%d", x, y)
}
