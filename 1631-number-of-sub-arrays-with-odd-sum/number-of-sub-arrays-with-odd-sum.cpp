class Solution {
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        int evenCount = 1;
        int oddCount = 0;
        long long ans = 0;
        long MOD = 1000000000  + 7;
        int crSum = 0;

        for(int i :arr)
        {
            crSum += i;
            if (crSum % 2 != 0)
            {
                ans += evenCount;
                oddCount += 1;
            }
            else
            {
                ans += oddCount;
                evenCount += 1;
            }
        }
        return ans % MOD;
        
    }
};