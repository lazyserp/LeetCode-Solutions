class Solution:
    def lengthOfLongestSubsequence(self, nums: List[int], target: int) -> int:
        n = len(nums)
        dp = [ [-1 for _ in range(target+1)] for _ in range(n+1)]

        dp[0][0] = 0

        for i in range(1,n+1):
            for j in range(0,target+1):
                take = -1
                if nums[i-1] <= j  and dp[i-1][j - nums[i-1]] != -1 :
                    take = 1+dp[i-1][j - nums[i-1]]
                
                skip = dp[i-1][j]

                dp[i][j] = max(take,skip)

        return dp[n][target]