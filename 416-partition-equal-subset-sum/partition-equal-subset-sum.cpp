class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();

        if ( sum % 2 !=  0) return false;

        int target = sum / 2;
        vector<vector<int>> dp(n+1,vector<int>(target+1,false));

        for(int i= 0; i <= n ; i++) dp[i][0] = true;

        for(int i=1 ;i <= n ;i++)
        {
            for(int s=1 ; s <= target ;s++)
            {
                dp[i][s] = dp[i-1][s]; //Skipping current item

                if ( nums[i-1] <= s)
                {
                    dp[i][s] = dp[i-1][s] || dp[i-1][s - nums[i-1]];
                }
            }
        }

        return dp[n][target];
        
    }
};