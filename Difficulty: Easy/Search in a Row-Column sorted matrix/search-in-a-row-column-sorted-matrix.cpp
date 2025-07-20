// User function template for C++

class Solution {
  public:
   bool islive(vector<int>&arr,int x){
       int low=0;
       int high=arr.size()-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]==x){
               return true;
           }else if(arr[mid]>x){
               high=mid-1;
           }else{
               low=mid+1;
           }
       }
       return false;
   }
    // Function to search a given number in row-column sorted matrix.
    bool matSearch(vector<vector<int>> &mat, int x) {
        for(int i=0;i<mat.size();i++){
            
        // code here
        if(islive(mat[i],x)){
            return true;
        }
        
        }
        return false;
        
    }
};
