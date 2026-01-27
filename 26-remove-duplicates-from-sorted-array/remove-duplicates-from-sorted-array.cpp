class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> unq;
        unq.push_back(nums[0]);
        int n = nums.size();

        for (int i=1; i < n ;i++)
        {
            if ( nums[i] != nums[i-1]) unq.push_back(nums[i]);
        }
        int ans = unq.size();
        for(int i=0 ;i < ans ;i++)
        {
            nums[i] = unq[i];
        }

        return ans;
        
        
    }
};