class Solution {
public:
    int kadane(vector<int>& arr)
    {
        long long currMax = 0;
        long long ansMax = 0;

        for(int i=0 ; i < arr.size() ;i++)
        {
            currMax = max(currMax + arr[i] , (long long)arr[i]);
            ansMax = max(ansMax,currMax);
        }

        return ansMax;
    }

    int kConcatenationMaxSum(vector<int>& arr, int k) 
    {
        long long sum = accumulate(arr.begin(),arr.end(),0);
        long long MOD = 1e9 + 7;

        if ( k == 1)
        {
            return kadane(arr) % MOD;
        }

        vector<int> newArr = arr;
        newArr.insert(newArr.end(),arr.begin(),arr.end());

        long long maxDouble = kadane(newArr);

        if (sum > 0)
        {
            return ((long long) (k-2) * sum  + maxDouble) % MOD;
        }

        return (maxDouble) % MOD;
    }
};