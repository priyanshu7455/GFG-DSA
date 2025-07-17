class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low=1;
        int ans=0;
        int high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long mid2=(mid*mid);
            if(mid2<=n){
                ans=mid;
                low=mid+1;
                
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};