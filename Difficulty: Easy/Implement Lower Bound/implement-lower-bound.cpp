// User function Template for C++
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        // int low=0;
        // int high=n-1;
        // int ans=n;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(arr[mid]>=target){
        //         ans=mid;
        //         high=mid-1;
        //     }else{
        //         low=mid+1;
        //     }
        // }
        // return ans;
       int LB= lower_bound(arr.begin(),arr.end(),target)-arr.begin();
       return LB;
    }
};
