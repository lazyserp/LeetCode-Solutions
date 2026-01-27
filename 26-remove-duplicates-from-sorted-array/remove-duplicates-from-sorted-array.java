class Solution {
    public int removeDuplicates(int[] nums) 
    {
        List<Integer> unq = new ArrayList<>();
        int n = nums.length;
        unq.add(nums[0]);

        for(int i=1 ; i < n ;i++)
        {
            if ( nums[i] != nums[i-1])
            {
                unq.add(nums[i]);
            }
        }
        int ans = unq.size();

        for(int i=0 ; i < ans ;i++)
        {
            nums[i] = unq.get(i);
        }

        return ans;

        
    }
}