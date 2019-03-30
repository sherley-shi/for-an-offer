package SameTree

import "for-an-offer/zs-leetcode-go/types"

func isSameTree(p *types.TreeNode, q *types.TreeNode) bool {
	if p == nil && q == nil {
		return true
	}
	if p == nil || q == nil {
		return false
	}
	if p.Val != q.Val {
		return false
	}
	return isSameTree(p.Left, q.Left) && isSameTree(p.Right, q.Right)
}
