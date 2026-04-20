class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        ans = -1
        n = len(nums)
        for i in range(n-1,-1,-1):
            mx = max(nums[0:i+1])
            mn = min(nums[i:n])
            score = mx - mn

            if score <= k:
                ans = i

        return ans
        