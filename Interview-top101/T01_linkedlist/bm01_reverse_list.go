package main

func ReverseList(pHead *ListNode) *ListNode {
	var pre *ListNode = nil //新链表的头节点
	var cur = pHead
	for cur != nil {
		next := cur.Next //保存当前节点的next指针
		cur.Next = pre   //当前节点反转
		pre = cur        //更新新链表的头节点
		cur = next       //继续下一次调整
	}
	return pre
}
