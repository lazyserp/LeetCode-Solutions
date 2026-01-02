class Solution {
    public int repeatedNTimes(int[] nums) 
    {
        int ans = 0;

        for(int k=1 ; k <= 3 ;k++)
        {
            for(int i =0 ; i < nums.length-k ;i++)
            {
                if ( nums[i] == nums[i+k]) 
                {
                    ans = nums[i];
                    return ans;
                }
            }
        }
        return ans;
    }
}