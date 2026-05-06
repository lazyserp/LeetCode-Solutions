class Solution {
    public int firstStableIndex(int[] nums, int k) 
    {
        int n = nums.length;
        int[] mx = new int[n];
        int maxy = nums[0];
        mx[0] = maxy;

        for(int i=1; i < n ;i++)
        {
            if ( nums[i] > maxy)
            {
                maxy = nums[i];
            }
            mx[i] = maxy;

        }

        int[] mn = new int[n];
        int miny = nums[n-1];
        mn[n-1] = miny;

        for(int i=n-2; i >=0 ;i--)
        {
            if ( nums[i] < miny)
            {
                miny = nums[i];
            }
            mn[i] = miny;

        }

        int ans = -1;
        for(int i=0 ; i < n ; i++ )
        {
            int score = mx[i] - mn[i];
            if ( score <= k)
            {
                ans = i;
                break;
            }
        }

        return ans;


        
    }
}