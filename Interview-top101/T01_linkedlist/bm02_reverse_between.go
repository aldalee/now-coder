package main

// https://leetcode.cn/problems/reverse-linked-list-ii/solution/fan-zhuan-lian-biao-ii-by-leetcode-solut-teyq/
func reverseBetween(head *ListNode, m int, n int) *ListNode {
	//添加表头
	dummy := &ListNode{-1, head}
	//pre指向待反转区域的第一个节点left的前一个节点，在循环过程中不变
	pre := dummy
	for i := 0; i < m-1; i++ {
		pre = pre.Next
	}
	//cur指向待反转区域的第一个节点left
	cur := pre.Next
	//next永远指向cur的下一个节点，循环过程中，next会随着cur变化
	var next *ListNode = nil
	//从m反转到n
	for i := m; i < n; i++ {
		next = cur.Next
		cur.Next = next.Next
		next.Next = pre.Next
		pre.Next = next
	}
	return dummy.Next
}
