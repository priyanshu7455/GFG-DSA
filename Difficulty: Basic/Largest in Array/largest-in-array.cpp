class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        return lar(arr,0);
    }
    int lar(vector<int>&arr,int i){
        if(i==arr.size()-1){
            return arr[i];
        }
        
        int maxi=lar(arr,i+1);
        return max(arr[i],maxi);
    }
};
