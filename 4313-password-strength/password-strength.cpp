class Solution {
public:
    int passwordStrength(string password) 
    {
        unordered_set<char> st;
        int ans = 0;
        
        for(auto i : password)
        {
            if ( st.find(i) == st.end() && islower(i)) ans++;
            else if (st.find(i) == st.end() && isupper(i)) ans += 2;
            else if (st.find(i) == st.end() && isdigit(i)) ans += 3;
            else if (st.find(i) == st.end()) ans += 5;
            st.insert(i);
        }

        return ans;
        
    }
};