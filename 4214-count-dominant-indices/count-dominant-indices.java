class Solution {
    public int dominantIndices(int[] nums) 
    {
        int ans = 0 ;
        int count = 1;
        int n = nums.length;

        int rangeSum = nums[n-1];

        for(int i=n-2 ; i >= 0; --i)
        {
            int avg = rangeSum / count;
            if ( avg < nums[i] ) ans++;
            count++;
            rangeSum += nums[i];
        }

        return ans;
        
    }
}