class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) 
    {
        HashMap<Integer,Integer> track = new HashMap<>();

        track.put(0,1);
        int ans =0 ;
        int sum = 0;

        for(int i=0 ; i < nums.length ;i++)
        {
            sum += nums[i];
            int comp = sum - goal;

            if ( track.containsKey(comp))
            {
                ans += track.get(comp);
            }

            track.put(sum,track.getOrDefault(sum,0)+1);
        }
        
        return ans;
    }
}