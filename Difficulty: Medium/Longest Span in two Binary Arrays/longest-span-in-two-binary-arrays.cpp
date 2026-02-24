class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        
        int n = a1.size();
        unordered_map<int,int> mp;   // prefixSum -> first index
        
        int prefixSum = 0;
        int maxi = 0;
        
        for(int i = 0; i < n; i++) {
            
            prefixSum += (a1[i] - a2[i]);
            
            // Case 1: from 0 to i
            if(prefixSum == 0) {
                maxi = i + 1;
            }
            
            // Case 2: prefixSum seen before
            if(mp.find(prefixSum) != mp.end()) {
                maxi = max(maxi, i - mp[prefixSum]);
            }
            else {
                // store first occurrence only
                mp[prefixSum] = i;
            }
        }
        
        return maxi;
    }
};