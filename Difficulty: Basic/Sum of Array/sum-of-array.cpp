// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        return sume(arr,0);
    }
    
    int sume(vector<int>&arr,int i){
     
        if(i==arr.size()){
            return 0;
        }
        return arr[i]+sume(arr,i+1); 
    }
};