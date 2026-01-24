class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        vector<int> freq(51, 0); 
        

        for(int i = 0; i < k; i++) {
            if (nums[i] < 0) {
                freq[nums[i] + 50]++; 
            }
        }
        
        
        int count = 0;
        bool found = false;
        for (int j = 0; j <= 50; j++) { 
            count += freq[j];
            if (count >= x) {
                ans.push_back(j - 50); 
                found = true;
                break;
            }
        }
        if (!found) ans.push_back(0);
        
       
        for(int i = k; i < n; i++) {
            int entering = nums[i];
            int leaving = nums[i-k];
            
            
            if (leaving < 0) freq[leaving + 50]--;
            
            
            if (entering < 0) freq[entering + 50]++;
            
            
            count = 0;
            found = false;
            for (int j = 0; j <= 50; j++) {
                count += freq[j];
                if (count >= x) {
                    ans.push_back(j - 50);
                    found = true;
                    break;
                }
            }
            if (!found) ans.push_back(0);
        }
        
        return ans;
    }
};