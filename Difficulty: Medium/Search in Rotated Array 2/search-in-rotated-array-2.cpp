class Solution {
  public:
    bool Search(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k) return true;
            
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                high=high-1;
                low=low+1;
                continue;
            }
            
            if(arr[low]<=arr[mid]){
                if(arr[low]<=k && k<arr[mid]){
                    high=mid-1;
                    
                }
                else{
                    low=mid+1;
                }
            }else{
                if(arr[mid]<=arr[high]){
                    if(arr[mid]<=k && k<=arr[high]){
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
                }
            }
        }
        return false;
    }
};