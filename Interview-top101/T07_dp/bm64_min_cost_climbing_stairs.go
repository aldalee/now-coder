package main

func minCostClimbingStairs(cost []int) int {
	n := len(cost)
	pre, cur := 0, 0
	for i := 2; i <= n; i++ {
		//dp[i] = Min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2])
		pre, cur = cur, Min(cur+cost[i-1], pre+cost[i-2])
	}
	return cur
}

func Min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
