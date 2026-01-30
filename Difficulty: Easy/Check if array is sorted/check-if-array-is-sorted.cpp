class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        return raj(arr,0);
    }
    bool raj(vector<int>&arr,int i){
        if(i>=arr.size()-1){
            return true;
        }
        
        if(arr[i]>arr[i+1]){
            return false;
        }
        return raj(arr,i+1);
    }
};