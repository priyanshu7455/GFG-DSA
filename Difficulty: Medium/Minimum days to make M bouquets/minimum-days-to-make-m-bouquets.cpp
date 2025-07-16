class Solution {
  public:
    int possible(vector<int>& arr,int mid,int m,int k){
        int count=0;
        int nofb=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                count++;
            }else{
                nofb+=(count)/k;
                count=0;
            }
        }
        nofb+=count/k;
        return nofb>=m;
    }
    int minDaysBloom(int m, int k, vector<int> &arr) {
        // Code here
        long long raj=1LL*k*m;
        if(raj>arr.size())return -1;
        int maxi=INT_MIN;int mani=INT_MAX;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            mani=min(mani,arr[i]);
        }
        int low=mani;
        int high=maxi;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};