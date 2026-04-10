class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int lo = -1;
        int hi = nums.size();
        vector<int> ans;

        while ( lo + 1 < hi)
        {
            int mid = lo + (hi-lo)/2;

            if ( nums[mid] >= target)
            {
                hi = mid;
            }
            else lo = mid;
        }
        if (hi == nums.size() || nums[hi] != target) ans.push_back(-1);
        else ans.push_back(hi);

        lo = -1;
        hi = nums.size();

        while ( lo+1 < hi)
        {
            int mid = lo + (hi-lo)/2;

            if ( nums[mid] <= target) lo = mid;
            else hi = mid;
        }
        if (lo == -1 || nums[lo] != target) ans.push_back(-1);
        else ans.push_back(lo);


        return ans;
    }
};