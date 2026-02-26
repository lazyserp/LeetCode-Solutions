class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int ans = 0;
        
        for(int i =0 ; i  < nums.size() ;i++)
        {
            long long p = 1;

            for(int j=i ; j < nums.size() ;j++)
            {
                p *= nums[j];
                if (p < k)
                {
                    ans++;
                }
                else break;
            }
        }

        return ans;
        
    }
};