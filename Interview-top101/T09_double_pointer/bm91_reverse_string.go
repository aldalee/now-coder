package main

func solve(str string) string {
	s := []byte(str)
	for p, q := 0, len(s)-1; p < q; p++ {
		s[p], s[q] = s[q], s[p]
		q--
	}
	return string(s)
}
