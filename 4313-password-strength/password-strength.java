class Solution {
    public int passwordStrength(String password) 
    {
        Set<Character> s = new HashSet<>();
        int ans = 0;
        var ask = password.toCharArray();

        for(Character i : ask)
        {
            if ( !s.contains(i) && Character.isLowerCase(i)) ans += 1;
            else if ( !s.contains(i) && Character.isUpperCase(i) ) ans += 2;
            else if (!s.contains(i) && Character.isDigit(i)) ans += 3;
            else if ( !s.contains(i) ) ans += 5;

            s.add(i);
        }

        return ans;
        
    }
}