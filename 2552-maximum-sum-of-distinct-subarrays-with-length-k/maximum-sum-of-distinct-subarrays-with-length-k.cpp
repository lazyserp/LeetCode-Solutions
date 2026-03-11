class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        long long ans = 0;
        int l=0,r=0;
        unordered_map<int,int> um;
        long long cSum = 0;

        while ( r < n)
        {
            cSum += nums[r];
            um[nums[r]]++;

            while ( um[nums[r]] > 1)
            {
                cSum -= nums[l];
                um[nums[l]]--;
                l++;
            } 

            if ( r-l+1 == k)
            {
                ans = max(ans,cSum);
                cSum -= nums[l];
                um[nums[l]]--;
                l++;
            }

            r++;
        }

        return ans;
        
    }
};