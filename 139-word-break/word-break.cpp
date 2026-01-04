class Solution {
public:
    int dp[301];

    bool wb(string &s,int start,unordered_set<string> &set)
    {
        if ( start == s.size()) return true;
        if (dp[start] != -1) return dp[start];

        for(int i=start ;i < s.size() ;i++)
        {
            if ( set.count(s.substr(start, i - start + 1)) && wb(s,i+1,set)) 
            {
                return dp[start] = 1;
            }
        }
        return dp[start] = 0 ;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set;
        for(auto i : wordDict) set.insert(i);

        memset(dp,-1,sizeof(dp));

        return wb(s,0,set);

    }
};