class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n = nums.length;
        int[] maxEleArr = new int[n]; 
        int[] minEleArr = new int[n];
        int maxEle = nums[0];
        int minEle = nums[n-1];
        int smallStableEleIndex = -1;

        // [0,0], k = 0
        // mx=    [0,0]
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxEle) {
                maxEle = nums[i];
                maxEleArr[i] = maxEle;
            } else {
                maxEleArr[i] = maxEle;
            }
        }
        // [5,0,1,4], k = 3
        // min = 0
        // mn = [0,0,1,4]
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < minEle) { 
                minEle = nums[i];
                minEleArr[i] = minEle;
            } else {
                minEleArr[i] = minEle;
            }
        }
    // mx=    [5,5,5,5]
    // mn =   [0,0,1,4]
    // k = 3
// smallStableEle =
// smallStableEleIndex = 
        for (int i = 0; i < n; i++) {
            if (maxEleArr[i] - minEleArr[i] <= k ) {
                smallStableEleIndex = i;
                break;
            }
        }

        return smallStableEleIndex;
    }
}