package main

import (
	"bufio"
	"fmt"
	"os"
)

func Min(a, b int) int {
	if a > b {
		return b
	}
	return a
}

func main() {
	str, _, _ := bufio.NewReader(os.Stdin).ReadLine()
	m := map[string]int{}
	//完成字符-出现次数之间的映射
	for _, s := range str {
		m[string(s)]++
	}
	//找到字符出现的最小次数
	mc := 20
	for _, v := range m {
		mc = Min(mc, v)
	}
	//按序输出符合条件的字符
	for _, s := range str {
		if m[string(s)] > mc {
			fmt.Print(string(s))
		}
	}
}
