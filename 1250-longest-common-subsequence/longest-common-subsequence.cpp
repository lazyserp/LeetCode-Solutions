class Solution {
public:
    int dp[1001][1001];

    int solve(string &s,string &t,int i,int j)
    {
        if ( i >= s.size() || j >= t.size()) return 0;
        if ( dp[i][j] != -1) return dp[i][j];

        if ( s[i] == t[j])
        {
            dp[i][j] = 1 + solve(s,t,i+1,j+1);
        }
        else
        {
            dp[i][j] = max(solve(s,t,i+1,j),solve(s,t,i,j+1));
        }

        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(text1,text2,0,0);   
    }
};