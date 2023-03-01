package main

import "fmt"

func Max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func Knapsack(N, M int, w, v [][3]int) int {
	dp := make([]int, N+1)
	for i := 1; i <= M; i++ {
		for j := N; j >= w[i][0]; j-- {
			dp[j] = Max(dp[j], dp[j-w[i][0]]+v[i][0]) //仅主件
			for k := 1; k <= 2; k++ {
				if j >= w[i][0]+w[i][k] { //主件 + 一个附件
					dp[j] = Max(dp[j], dp[j-w[i][0]-w[i][k]]+v[i][0]+v[i][k])
				}
			}
			if j >= w[i][0]+w[i][1]+w[i][2] { //主件 + 两个附件
				dp[j] = Max(dp[j], dp[j-w[i][0]-w[i][1]-w[i][2]]+v[i][0]+v[i][1]+v[i][2])
			}
		}
	}
	return dp[N]
}

func main() {
	N, M := 0, 0 //总钱数、可购买的物品个数
	fmt.Scan(&N, &M)
	var v, p, q int          //物品的价格、物品的重要度、物品是主件还是附件
	W := make([][3]int, N+1) //物品总价格（重量）
	V := make([][3]int, N+1) //满意度（价值）
	f := make([]int, N+1)    //主件的第几个附件 f[i] ∈ {0,1,2}
	for i := 1; i <= M; i++ {
		fmt.Scan(&v, &p, &q)
		if q != 0 { //附件，q表示所属主件的编号
			f[q]++
			W[q][f[q]] = v
			V[q][f[q]] = v * p
		} else { //主件
			W[i][0] = v
			V[i][0] = v * p
		}
	}
	fmt.Println(Knapsack(N, M, W, V))
}
