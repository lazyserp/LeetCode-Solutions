class Solution {
public:
    int dominantIndices(vector<int>& nums) 
    {
        int n = nums.size();

        int ans = 0;
        int rangeSum = nums[n-1];
        int count = 1;

        for(int i=n-2 ; i >= 0 ;--i)
        {
            int avg = rangeSum / count;
            if (nums[i] > avg) ans++;
            count++;
            rangeSum += nums[i];
        }
        return ans;

        
    }
};