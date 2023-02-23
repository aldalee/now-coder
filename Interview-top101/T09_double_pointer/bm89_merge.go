package main

import "sort"

// Interval 类一维数组
type Interval struct {
	Start int
	End   int
}

func merge(intervals []*Interval) []*Interval {
	sort.Slice(intervals, func(i, j int) bool {
		return intervals[i].Start < intervals[j].Start
	})
	var merged []*Interval
	for i := 0; i < len(intervals); i++ {
		n := len(merged)
		if n == 0 || merged[n-1].End < intervals[i].Start {
			merged = append(merged, intervals[i])
		} else {
			merged[n-1].End = Max(merged[n-1].End, intervals[i].End)
		}
	}
	return merged
}

func Max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
