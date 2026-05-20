class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> mp;

        for(string i : strs)
        {
            string chk = i;
            sort(i.begin(),i.end());

            mp[i].push_back(chk);
        }

        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};