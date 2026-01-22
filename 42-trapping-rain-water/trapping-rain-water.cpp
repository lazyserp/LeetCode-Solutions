class Solution {
public:
    int trap(vector<int>& height) 
    {
        int l = 0;
        int r = height.size()-1;
        int water = 0;
        int Lmax = height[l];
        int Rmax = height[r];

        while ( l <= r)
        {
            if ( Lmax < Rmax)
            {
                if ( Lmax < height[l]) Lmax = height[l];
                water += Lmax - height[l];
                l++;
            }
            else if ( Rmax <= Lmax)
            {
                if ( Rmax < height[r]) Rmax = height[r];
                water += Rmax - height[r];
                r--;
            }
        }
        return water;
        
    }
};