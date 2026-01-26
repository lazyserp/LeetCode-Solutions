class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l = 0;
        int len = 0;
        int n = s.size();
        unordered_set<char> set;

        for(int i = 0 ; i < n ;i++)
        {
            while (set.contains(s[i]))
            {
                set.erase(s[l]);
                l++;
            }
            set.insert(s[i]);
            len = max(len,i-l+1);
        }
        return len;

        
    }
};