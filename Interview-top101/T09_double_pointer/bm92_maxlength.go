package main

func maxLength(arr []int) int {
	m := map[int]int{} //map<arr[i], index>
	ans := 0
	for left, right := 0, 0; right < len(arr); right++ {
		dupIndex, ok := m[arr[right]]
		if ok { //contains
			left = Max(left, dupIndex+1)
		}
		m[arr[right]] = right
		ans = Max(ans, right-left+1)
	}
	return ans
}
