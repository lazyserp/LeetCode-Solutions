# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        newHead = ListNode(-1)
        tmp = newHead

        l1 = list1
        l2 = list2

        while ( l1 and l2):
            if ( l1.val < l2.val):
                newNode = ListNode(l1.val)
                tmp.next = newNode
                tmp=tmp.next
                l1 = l1.next
            else:
                newNode = ListNode(l2.val)
                tmp.next = newNode
                tmp=tmp.next
                l2 = l2.next

        while l2:
            remNode = ListNode(l2.val)
            tmp.next = remNode
            tmp = tmp.next
            l2 = l2.next
        
        while l1:
            remNode = ListNode(l1.val)
            tmp.next = remNode
            tmp = tmp.next
            l1 = l1.next
        
        return newHead.next

        