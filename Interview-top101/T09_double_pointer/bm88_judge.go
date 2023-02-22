package main

func judge(str string) bool {
	for p, q := 0, len(str)-1; p <= q; p++ {
		if str[p] != str[q] {
			return false
		} else {
			q--
		}
	}
	return true
}
