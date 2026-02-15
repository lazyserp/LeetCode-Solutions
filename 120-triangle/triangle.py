class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        ans = 0
        dp = triangle

        for i in range(len(triangle)-2,-1,-1):
            for j in range(len(triangle[i])-1,-1,-1):
                dp[i][j] = triangle[i][j] + min(triangle[i+1][j],triangle[i+1][j+1])

        return dp[0][0]

        