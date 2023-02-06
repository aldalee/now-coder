package main

type ListNode struct {
	Val  int
	Next *ListNode
}

func ReverseList(pHead *ListNode) *ListNode {
	var pre *ListNode = nil
	var cur = pHead
	for cur != nil {
		curNext := cur.Next
		cur.Next = pre
		pre = cur
		cur = curNext
	}
	return pre
}
