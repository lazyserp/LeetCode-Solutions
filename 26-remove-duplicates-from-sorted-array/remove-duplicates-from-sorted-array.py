class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        unq = [nums[0]]
        for i in range(1,len(nums)):
            if nums[i] != nums[i-1]:
                unq.append(nums[i])
        ans = len(unq)
        for i in range(0,ans):
            nums[i] = unq[i]

        return ans        