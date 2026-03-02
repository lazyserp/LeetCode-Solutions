class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i= 0;
        int j= 0;

        int m = s.size();
        int n = p.size();

        vector<int> Pchar(26,0);
        vector<int> Schar(26,0);
        vector<int> ans;

        for(char i : p)
        {
            Pchar[i - 'a']++;
        }

        while ( j < m)
        {
            Schar[s[j] - 'a']++;

            while (j-i+1 > n)
            {
                Schar[s[i] - 'a']--;
                i++;
            }

            if(j-i+1 == n)
            {
                if ( Pchar == Schar) ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};