class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        vector<int>ans;
        unordered_set<int>raj;
        for(int num:arr){
            raj.insert(num);
        }
        
        for(int i=low;i<=high;i++){
            if(raj.find(i)==raj.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};