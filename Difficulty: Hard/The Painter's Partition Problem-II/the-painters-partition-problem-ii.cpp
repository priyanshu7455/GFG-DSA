// User function template for C++

class Solution {
  public:
    bool timetaken(vector<int>&arr,int mid,int k){
        int nooftime=1;
        long long totaltime=0;
        for(int i=0;i<arr.size();i++){
            if(totaltime+arr[i]<=mid){
                //mid is time we give from the ans;
                totaltime+=arr[i];
            }else{
                nooftime++;
                totaltime=arr[i];
            }
        }
        return nooftime<=k;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        if(k==1) return high;
        while(low<=high){
            int mid=(low+high)/2;
            if(timetaken(arr,mid,k)){
                ans=mid;
                high=mid-1;
                
            }else{
                low=mid+1;
            }
        }
        return ans;
        
        // return minimum time
    }
};