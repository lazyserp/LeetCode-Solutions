class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        int ans = 0;
        int oddCount = 0;
        
        map<int,int> freq;
        freq[0] = 1;

        for(int i=0 ; i < nums.size() ;i++)
        {
            if (nums[i] % 2 != 0)
            {
                oddCount += 1;
            }
            int term = oddCount - k;

            if (freq.find(term) != freq.end())
            {
                ans += freq[term];
            }

            freq[oddCount]++;
        }

        return ans;
        
    }
};