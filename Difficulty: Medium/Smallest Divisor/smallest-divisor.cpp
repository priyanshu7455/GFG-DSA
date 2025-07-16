class Solution {
  public:
   int number(vector<int>& arr,int mid){
       int sum=0;
       int n=arr.size();
       for(int i=0;i<n;i++){
           sum+=ceil((double)(arr[i])/(double)(mid));
       }
       return sum;
   }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        if(n>k) return -1;
        int ans=INT_MAX;
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(number(arr,mid)<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
