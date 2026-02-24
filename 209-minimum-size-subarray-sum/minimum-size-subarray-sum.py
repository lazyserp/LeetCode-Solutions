class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        i,j = 0,0
        sum = 0
        ans = float('inf')
        
        while ( j < len(nums)):
            sum += nums[j]

            while ( sum >= target):
                ans = min(ans,j-i+1)
                sum -= nums[i]
                i += 1
            j += 1

        return ans if ans != float('inf') else 0
        