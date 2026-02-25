class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int currMax = nums[0];
        int maxAns = nums[0];

        int total = nums[0];

        int currMin = nums[0];
        int minAns = nums[0];

        for(int i=1 ; i < nums.size() ;i++)
        {
            currMax = max(nums[i],currMax + nums[i]);
            maxAns = max(maxAns,currMax);

            total += nums[i];

            currMin = min(nums[i],currMin + nums[i]);
            minAns = min(minAns,currMin);
        }

        if ( maxAns < 0) return maxAns;

        return max(maxAns, total - minAns);
        
    }
};