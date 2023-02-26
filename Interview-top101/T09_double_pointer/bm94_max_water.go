package main

func maxWater(arr []int) (ans int64) {
	L, R := 0, len(arr)-1
	MaxL, MaxR := 0, 0
	for L < R {
		MaxL = Max(MaxL, arr[L])
		MaxR = Max(MaxR, arr[R])
		if arr[L] < arr[R] {
			ans += int64(MaxL - arr[L])
			L++
		} else {
			ans += int64(MaxR - arr[R])
			R--
		}
	}
	return
}
