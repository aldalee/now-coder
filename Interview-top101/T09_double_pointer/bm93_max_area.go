package main

func maxArea(height []int) int {
	L, R := 0, len(height)-1
	ans := 0
	for L < R {
		area := Min(height[L], height[R]) * (R - L)
		ans = Max(ans, area)
		if height[L] <= height[R] {
			L++
		} else {
			R--
		}
	}
	return ans
}

func Min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
