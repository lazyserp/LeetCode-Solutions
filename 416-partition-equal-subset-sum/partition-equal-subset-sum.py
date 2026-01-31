class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        arrSum  = sum(nums)
        n = len(nums)

        if ( arrSum % 2 != 0):
            return False

        newTar = arrSum // 2;
        
        dp = [ [False] * (newTar+1) for _ in range(n+1)]
        
        for i in range(1,n+1):
            dp[i][0] = True

        for i in range(1 , n+1):
            for s in range(1, newTar+1):
                #skip
                dp[i][s] = dp[i-1][s]

                if ( nums[i-1] <= s):
                    dp[i][s] = dp[i-1][s] or dp[i-1][s-nums[i-1]]

        return dp[n][newTar]

        