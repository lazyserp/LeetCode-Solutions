class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int,int> um;
        int ans = 0;

        for(int i:nums)
        {
            um[i]++;
        }

        for(auto i : um)
        {
            if (i.second == n) 
            {
                ans = i.first;
                return ans;
            }
        }
        return ans;
        
    }
};