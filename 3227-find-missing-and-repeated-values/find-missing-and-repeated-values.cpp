class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        vector<int> ans(2);
        unordered_map<int,int> freq;
        int a = 0;
        int n = grid.size();


        for(int i=0 ; i < grid.size() ;i++)
        {
            for(int j=0 ; j < grid[i].size();j++)
            {
                int term = grid[i][j];
                freq[term]++;
                if ( freq[term] == 2) 
                {
                    a = term;
                    break;
                }
            }
        }

        ans[0] = a;

        int b = 0;
        int currSum = 0;

        for(int i=0 ; i < grid.size() ;i++)
        {
            for(int j=0 ; j < grid[i].size() ;j++)
            {
                currSum += grid[i][j];
            }
        }

        int totalTerms  = n*n;
        int actualSum = (totalTerms *(totalTerms+1))/ 2;
        ans[1] = actualSum - (currSum-a);   
        return ans;     
    }
};