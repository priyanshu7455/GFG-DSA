class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int num=-1;
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                num=i;
                break;
            }
        }
        if(num==-1){
            reverse(arr.begin(),arr.end());
            return ;
        }
        
        for(int i=n-1;i>num;i--){
            if(arr[i]>arr[num]){
                swap(arr[i],arr[num]);
                break;
            }
        }
        reverse(arr.begin()+num+1,arr.end());
    }
};