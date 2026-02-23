class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        
        set<int> s;   // stores only unique elements
        
        // insert elements of array a
        for(int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        
        // insert elements of array b
        for(int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }
        
        // convert set into vector
        vector<int> ans(s.begin(), s.end());
        
        return ans;
    }
};