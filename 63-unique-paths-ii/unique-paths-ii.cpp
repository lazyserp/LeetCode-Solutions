class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();

        vector<vector<long>> dp(rows,vector<long>(cols,0));

        if ( obstacleGrid[rows-1][cols-1] == 0) dp[rows-1][cols-1] = 1;

        for(int i = cols-2 ; i >= 0 ;i--)
        {
            if (obstacleGrid[rows-1][i] == 1) dp[rows-1][i] = 0;
            else dp[rows-1][i]  = dp[rows-1][i+1];
        }

        for(int j = rows-2 ; j >= 0 ;j--)
        {
            if (obstacleGrid[j][cols-1] == 1) dp[j][cols-1] = 0;
            else dp[j][cols-1] = dp[j+1][cols-1];
        }

        for(int i = rows-2 ; i >= 0 ;i--)
        {
            for(int j = cols-2 ; j >=0 ; j--)
            {
                if (obstacleGrid[i][j] == 1) dp[i][j] = 0;
                else dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};