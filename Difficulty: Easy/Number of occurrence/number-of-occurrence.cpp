class Solution {
  public:
  
   int minindex(vector<int> &arr,int target){
       int n=arr.size();
       int low=0;
       int high=n-1;
       int ans=-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]==target){
               ans=mid;
               high=mid-1;
           }else if(arr[mid]<target){
               low=mid+1;
           }else{
               high=mid-1;
           }
       }
       return ans;
   }
    int maxindex(vector<int> &arr,int target){
       int n=arr.size();
       int low=0;
       int high=n-1;
       int last=-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]==target){
               last=mid;
               low=mid+1;
           }else if(arr[mid]>target){
               high=mid-1;
           }else{
               low=mid+1;
           }
       }
       return last;
   }
   pair<int, int> firstAndLastPosition(vector<int>& arr, int k) {
    int first = minindex(arr, k);
    if (first == -1) return { -1, -1};
    int last = maxindex(arr, k);
    return {first, last};
   }
   
   
    int countFreq(vector<int>& arr, int target) {
        // code here
        pair<int, int> ans = firstAndLastPosition(arr, target);
        if (ans.first == -1) return 0;
        return (ans.second - ans.first + 1);
        
        
    }
};
