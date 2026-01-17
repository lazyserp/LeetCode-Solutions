class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if ( s.size() != t.size())return false;

        unordered_map<char,char> um;
        unordered_set<char> st;
        for(int i=0 ;i < s.size() ;i++)
        {
            char cr = s[i];
            if ( um.find(cr) != um.end())
            {
                if ( um[cr] != t[i]) return false;
            }
            else if ( st.count(t[i]) ==1 ) return false;

            um[cr] = t[i];
            st.insert(t[i]);
        }
        return true;
        
    }
};