class Solution {
    public boolean wordBreak(String s, List<String> wordDict) 
    {
        int n = s.length();
        boolean[] dp = new boolean[n+1];
        dp[0] = true;

        HashSet<String> set = new HashSet<>() ;
        for( var i : wordDict)
        {
            set.add(i);
        }

        for(int i= 1; i <= n ; i++)
        {
            for(int j=0 ; j < i ; j++)
            {
                if ( dp[j] == true && set.contains(s.substring(j,i)))
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
}