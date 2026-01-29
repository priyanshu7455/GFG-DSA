class Solution {
  public:
    string getBinaryRep(int n) {
        // Write Your Code here
        string raj="";
        for(int i =31;i>=0;i--){
            if((n&(1<<i))!=0){
                raj+='1';
            }else{
                raj+='0';
            }
        }
        return raj;
        
    }
};