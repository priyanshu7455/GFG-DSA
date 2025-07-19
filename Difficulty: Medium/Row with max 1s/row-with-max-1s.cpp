// User function template for C++
class Solution {
  public:
  int firstocrence(vector<int>&arr,int x){
      //x is 1 as we need to find one;
      int low=0;
      int high=arr.size()-1;
      int ans=arr.size();
      while(low<=high){
          int mid=(low+high)/2;
          if(arr[mid]>=x){
              ans=mid;
              high=mid-1;
          }else{
              low=mid+1;
          }
      }
      return ans;
  }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int max_count=0;
        
        int index=-1;
        for(int i=0;i<arr.size();i++){
            int count_one=arr[i].size() - firstocrence(arr[i],1);
            if(count_one>max_count){
                max_count=count_one;
                index=i;
            }
            
        }
        return index;
        
    }
};