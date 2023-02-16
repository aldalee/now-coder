package main

func Fibonacci(n int) int {
	f1, f2, fn := 1, 1, 1
	for i := 3; i <= n; i++ {
		fn = f1 + f2
		f1, f2 = f2, fn
	}
	return fn
}
