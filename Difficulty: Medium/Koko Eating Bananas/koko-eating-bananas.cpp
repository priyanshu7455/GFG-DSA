class Solution {
  public:
    int findmax(vector<int> &arr){
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
    
    long long timetaken(vector<int>& arr,int timee){
       long long times=0;
       int n=arr.size();
       for(int i=0;i<n;i++){
           times+=ceil((double)(arr[i])/(double)(timee));
       }
       return times;
    }
    int kokoEat(vector<int>& arr, int k) {
        int low=1;
        int n=arr.size();
        int ans=INT_MAX;
        int high=findmax(arr);
        while(low<=high){
            int mid=(low+high)/2;
            long long timeta=timetaken(arr,mid);
            if(timeta<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        // Code here
        
    }
};