class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        pfx = [0] * len(nums)
        pfx[0] = nums[0]
        for i in range(1,len(nums)):
            pfx[i] = pfx[i-1] + nums[i]
        return pfx
        