package main

// f(n) = f(n-1) + f(n-2)	n > 2
// f(1) = 1
// f(2) = 2
func jumpFloor(number int) int {
	f1, f2, fn := 1, 1, 1
	for i := 2; i <= number; i++ {
		fn = f1 + f2
		f1, f2 = f2, fn
	}
	return fn
}
