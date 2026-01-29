class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int ans=0;
        for(int i=0;i<b.size();i++){
            ans=ans*2+(b[i]-'0');
        }
        return ans;
    }
};