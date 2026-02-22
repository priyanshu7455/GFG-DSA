class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        
        unordered_map<int,int> mp;
        
        long count = 0;
        int prefixXor = 0;
        
        mp[0] = 1;   // Important
        
        for(int i = 0; i < arr.size(); i++) {
            
            prefixXor ^= arr[i];   // running XOR
            
            int x = prefixXor ^ k;
            
            if(mp.find(x) != mp.end()) {
                count += mp[x];
            }
            
            mp[prefixXor]++;   // store frequency
        }
        
        return count;
    }
};