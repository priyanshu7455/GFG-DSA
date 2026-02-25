class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < n; i++) {
            
            // Convert element to +1 or -1
            if(arr[i] > k)
                prefixSum += 1;
            else
                prefixSum -= 1;
            
            // If prefixSum > 0, whole subarray [0..i] is valid
            if(prefixSum > 0)
                maxLen = i + 1;
            
            // Store first occurrence of prefixSum
            if(mp.find(prefixSum) == mp.end())
                mp[prefixSum] = i;
            
            // Check if prefixSum - 1 existed before
            if(mp.find(prefixSum - 1) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum - 1]);
            }
        }
        
        return maxLen;
    }
};