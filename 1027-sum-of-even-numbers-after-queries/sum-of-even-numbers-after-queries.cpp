class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        vector<int> ans;

        for(auto i : queries)
        {
            int sm = 0;

            int val = i[0];
            int idx= i[1];
            nums[idx] += val;

            for(int i : nums)
            {
                if ( i % 2 == 0) sm += i;
            }
            ans.push_back(sm);
        }

        return ans;
        
    }
};