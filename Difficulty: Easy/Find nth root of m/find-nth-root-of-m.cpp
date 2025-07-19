class Solution {
  public:
   int aftermultiply(int mid,int n,int m){
       long long count=1;
       //return 1, if == m:
       //return 0, if < m:
       //return 2, if > m:
       for(int i=0;i<n;i++){
           count=count * mid;
           if(count>m)return 2;
       }
       if(count==m)return 1;
       return 0;
   }
    int nthRoot(int n, int m) {
        // Code here.
        int low=1;
        int high=m;
        // long long ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int after=aftermultiply(mid,n,m);
            if(after==1){
                return mid;
            }else if(after==2){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return -1;
    }
};