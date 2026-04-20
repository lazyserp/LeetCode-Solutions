class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)

        mx = [0] * n
        mx[0] = nums[0]
        for i in range(1,n):
            mx[i] = max(mx[i-1],nums[i])

        mn = [0] * n
        mn[-1] = nums[-1]
        for i in range(n-2,-1,-1):
            mn[i] = min(mn[i+1],nums[i])

        for i in range(0,n):
            if mx[i]-mn[i] <= k:
                return i

        return -1
