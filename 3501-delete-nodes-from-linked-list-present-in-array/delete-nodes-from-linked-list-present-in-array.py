# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:

        dummy = ListNode(-1)
        dummy.next = head

        st = set(nums)

        prv = dummy
        curr = head

        while curr:
            if curr.val in st:
                prv.next = curr.next
            else:
                prv = curr

            curr = curr.next
        
        return dummy.next
        