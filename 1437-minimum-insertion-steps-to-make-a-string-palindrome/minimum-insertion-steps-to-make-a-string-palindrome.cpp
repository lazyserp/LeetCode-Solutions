class Solution {
public:
    vector<vector<int>> dp;

    int LCS(string &s,string &t,int i,int j)
    {
        if ( i==0 || j==0) return 0;
        if ( dp[i][j] != -1) return dp[i][j];

        if ( s[i-1] == t[j-1]) return dp[i][j] = 1 + LCS(s,t,i-1,j-1);

        return dp[i][j] = max(LCS(s,t,i-1,j),LCS(s,t,i,j-1));

    }

    int minInsertions(string s) 
    {
        string t = s;
        reverse(t.begin(),t.end());
        int n = s.size();

        dp.assign(n+1,vector<int>(n+1,-1));

        int LPSanswer = LCS(s,t,n,n);
        return n - LPSanswer;
        
    }
};