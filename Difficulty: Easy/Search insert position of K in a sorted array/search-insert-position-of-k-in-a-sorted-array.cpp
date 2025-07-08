// User function Template for C++

class Solution {
  public:
    int searchInsertK(vector<int> arr, int N, int k) {
        // code here
        int lb=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
        return lb;///it was same as lowr boound do dry run you and do it raj 
    }
};