class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        ctr = dict(Counter(nums))

        for i in nums:
            if ctr[i] >= 2:
                return True
        
        return False
        