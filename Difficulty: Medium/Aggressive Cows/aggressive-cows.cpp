// User function Template for C++

class Solution {
  public:
  bool canweplace(vector<int>&arr,int mid,int cow){
      int cntcow=1;
      int lastone=arr[0];
      for(int i=1;i<arr.size();i++){
          if(arr[i]-lastone>=mid){
              cntcow++;
              lastone=arr[i];
          }
          if(cntcow>=cow) return true;
      }
      return false;
  }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here3
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        int ans=-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(canweplace(stalls,mid,k)==true){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};