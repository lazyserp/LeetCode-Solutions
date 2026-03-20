class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        if (ops.empty()) return m*n;
        int ans = INT_MAX;
        int minA = INT_MAX;
        int minB = INT_MAX;

        for(auto i : ops)
        {
            minA = min(minA,i[0]);
            minB = min(minB,i[1]);
            ans = min(ans ,minA * minB);
        }
        return ans;    
    }
};