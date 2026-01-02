class Solution {
    public int repeatedNTimes(int[] nums) 
    {
        HashMap<Integer,Integer> map = new HashMap<>();
        int ans = 0;
        int n = nums.length / 2;
        for(int i:nums)
        {
            map.put(i,map.getOrDefault(i,0) + 1 );
        }

        for( Map.Entry<Integer,Integer> entry : map.entrySet())
        {
            if (entry.getValue() == n )
            {
                ans = entry.getKey();
                break;
            }
        }
        return ans;
        
    }

}