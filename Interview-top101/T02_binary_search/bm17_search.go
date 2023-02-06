package main

func search(nums []int, target int) int {
	L, R := 0, len(nums)-1
	for L <= R {
		M := ((R - L) >> 1) + L
		if nums[M] == target {
			return M
		} else if nums[M] > target {
			R = M - 1
		} else {
			L = M + 1
		}
	}
	return -1
}
