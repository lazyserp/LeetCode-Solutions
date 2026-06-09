# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        br = []
        tmp = head
        while tmp:
            br.append(tmp.val)
            tmp = tmp.next

        fut = None
        curr= head
        prev = None

        while curr:
            fut = curr.next
            curr.next = prev
            prev = curr
            curr = fut

        newHead = prev
        aft = []
        while newHead:
            aft.append(newHead.val)
            newHead = newHead.next
        
        return aft == br
        