class Solution:
    def dominantIndices(self, nums: List[int]) -> int:
        ans = 0
        count = 1
        RangeSum = nums[-1]

        for i in range(len(nums)-2 ,-1, -1):
            avg = RangeSum / count
            if ( avg < nums[i]):
                ans += 1
            count += 1
            RangeSum += nums[i]
        
        return ans
        