class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        rows = len(obstacleGrid)
        cols = len(obstacleGrid[0])

        dp = [ [0 for i in range(cols)] for j in range(rows)]

        if obstacleGrid[rows-1][cols-1] == 1:
            return 0
        dp[rows-1][cols-1] = 1


        for i in range(cols-2,-1,-1):
            if obstacleGrid[rows-1][i] == 1:
                dp[rows-1][i] = 0
            else:
                dp[rows-1][i] = dp[rows-1][i+1]


        for i in range(rows-2,-1,-1):
            if obstacleGrid[i][cols-1] == 1:
                dp[i][cols-1] = 0
            else:
                dp[i][cols-1] = dp[i+1][cols-1]


        for i in range(rows-2,-1,-1):
            for j in range(cols-2,-1,-1):
                if obstacleGrid[i][j] == 1:
                    dp[i][j] = 0
                else:
                    dp[i][j] = dp[i+1][j] + dp[i][j+1]
        
        return dp[0][0]
