class NumArray {
public:
    vector<int> pfx;

    NumArray(vector<int>& nums) 
    {
        int n = nums.size();
        pfx.resize(n+1);

        pfx[0] = 0;

        for(int i=0 ; i < n ; i++)
        {
            pfx[i+1] = pfx[i] + nums[i];
        }        
    }
    
    int sumRange(int left, int right) 
    {
        return pfx[right+1] - pfx[left];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */