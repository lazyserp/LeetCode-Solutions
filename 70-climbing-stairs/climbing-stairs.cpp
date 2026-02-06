class Solution {
public:
    vector<int> dp = vector<int>(46,-1);

    int solve(int n)
    {
        if ( n == 0) return 0;
        if ( n == 1) return 1;
        if ( n == 2) return 2;
        if ( dp[n] != -1) return dp[n];

        return dp[n] = solve(n-1) + solve(n-2);
    }
    int climbStairs(int n) 
    {
        dp[0] = 0;
        dp[1] =1;
        dp[2] = 2;

        return solve(n);

    }
};