class Solution {
    public int[] concatWithReverse(int[] nums) 
    {
        int n = nums.length;
        int[] ans = new int[2*n];

        for(int i=0; i< 2*n ;i++)
        {
            if ( i < n) ans[i] = nums[i];
            else ans[i] = nums[n-(i-n)-1];
        }

        return ans;
        
    }
}