class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> pfx(n,0);
        pfx[0] = nums[0];
        for(int i=1 ; i < n ;i++)
        {
            pfx[i] = pfx[i-1] + nums[i];
        }

        for(int i=0 ; i < n ;i++)
        {
            if ( i == 0)
            {
                if ( 0 == pfx[n-1] - pfx[i]) return i;
            }
            else if ( i == n-1)
            {
                if ( pfx[i-1] == 0) return i;
            }
            else if ( pfx[i-1] == pfx[n-1] - pfx[i]) return i;
        }
        return -1;
        
    }
};