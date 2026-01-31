class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [ [-1] * (n+1) for i in range(m+1)]

        for i in range(0 , n):
            dp[m-1][i] = 1

        for j in range(0,m):
            dp[j][n-1] = 1

        for row in range(m-2,-1,-1):
            for col in range(n-2,-1,-1):
                dp[row][col] = dp[row+1][col] + dp[row][col+1]
        
        return dp[0][0]
