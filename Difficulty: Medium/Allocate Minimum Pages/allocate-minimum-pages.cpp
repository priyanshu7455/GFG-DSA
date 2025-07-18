class Solution {
  public:
   int bookdis(vector<int>arr,int mid){
       int student=1;
       long long pages=0;
       for(int i=0;i<arr.size();i++){
           if(pages+arr[i]<=mid){
               pages+=arr[i];
           }else{
               student++;//go to the next student ;
               pages=arr[i];//move to the thak student and giveing him arri[i]
           }
       }
       return student;
       
   }
    int findPages(vector<int> &arr, int k) {
        // code here
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        long long ans=-1;
        int n=arr.size();
        if(n<k) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            int nav=bookdis(arr,mid);
            if(nav<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};