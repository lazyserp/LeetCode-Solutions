class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n = triangle.size();

        vector<vector<int>> dp = triangle;

        int ans = 0;

        for(int i=n-2 ; i >=0 ; i-- )
        {
            int m = triangle[i].size();

            for(int j = m-1 ; j >=0 ;--j)
            {
                dp[i][j] = triangle[i][j] + min(dp[i+1][j],dp[i+1][j+1]);
            }
        }

        return dp[0][0];
        
    }
};