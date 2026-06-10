# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        tmp = head
        length = 0

        while tmp:
            tmp = tmp.next
            length += 1

        if n == length:
            return head.next

        delPos = length-n

        tmp = head
        for i in range(delPos-1):
            tmp = tmp.next

        if tmp.next:
            tmp.next = tmp.next.next


        return head

        