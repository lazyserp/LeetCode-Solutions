class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum = nums[0];
        int crSum = nums[0];

        int n = nums.length;

        for(int i=1; i < n ;i++)
        {
            crSum = Math.max(crSum + nums[i] , nums[i]);
            maxSum = Math.max(maxSum, crSum);
        }

        return maxSum;
        
    }
}