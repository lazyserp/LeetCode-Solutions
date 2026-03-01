class Solution {
    public int[] runningSum(int[] nums) 
    {
        int n = nums.length;
        int[] pfx= new int[n];

        pfx[0] = nums[0];

        for(int i=1; i < n ; i++)
        {
            pfx[i] = pfx[i-1] + nums[i];
        }

        return pfx;
        
    }
}