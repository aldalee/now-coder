package main

import "sort"

func minmumNumberOfHost(n int, startEnd [][]int) (ans int) {
	start := make([]int, n)
	end := make([]int, n)
	//分别得到活动起始时间
	for i := 0; i < n; i++ {
		start[i] = startEnd[i][0]
		end[i] = startEnd[i][1]
	}
	//单独排序
	sort.Ints(start)
	sort.Ints(end)
	j := 0
	for i := 0; i < n; i++ {
		//新开始的节目大于上一轮结束的时间，主持人不变
		if start[i] >= end[j] {
			j++
		} else {
			ans++ //主持人增加
		}
	}
	return
}
