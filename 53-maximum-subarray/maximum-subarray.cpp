class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxSum = nums[0];
        int currMax = nums[0];

        int n = nums.size();

        for(int i= 1; i < n ;i++)
        {
            currMax = max(nums[i],currMax + nums[i]);
            maxSum = max(maxSum,currMax);
        }

        return maxSum;
        
    }
};