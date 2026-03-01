class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> pfx(n,0);

        pfx[0] = nums[0];

        for(int i=1;  i < n ; i++)
        {
            pfx[i] = pfx[i-1] + nums[i];
        }

        return pfx;
        
    }
};