package main

func judge(str string) bool {
	p, q := 0, len(str)-1
	for p <= q {
		if str[p] != str[q] {
			return false
		} else {
			p++
			q--
		}
	}
	return true
}
