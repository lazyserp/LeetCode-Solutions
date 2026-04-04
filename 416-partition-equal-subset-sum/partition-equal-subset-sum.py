class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        sumCheck = sum(nums)

        if sumCheck%2 != 0:
            return False

        n = len(nums)
        reqSum = sumCheck // 2

        dp = [ [False for _ in range(reqSum+1)] for _ in range(n+1)]
        
        for i in range(0,n+1):
            dp[i][0] = True

        for i in range(1,n+1):
            for j in range(1,reqSum+1):

                if nums[i-1] <= j:
                    dp[i][j] = dp[i-1][j-nums[i-1]] or dp[i-1][j]
                else:
                    dp[i][j] = dp[i-1][j]

        return dp[n][reqSum]
        