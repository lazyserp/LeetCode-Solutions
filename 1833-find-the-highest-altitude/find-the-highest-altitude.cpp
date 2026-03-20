class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int maxSum = 0;
        int runningSum = 0;

        for(int i: gain)
        {
            runningSum += i;
            maxSum = max(maxSum,runningSum);
        }
        return maxSum;
    }
};