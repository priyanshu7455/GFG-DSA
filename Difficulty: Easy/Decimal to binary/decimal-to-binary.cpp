class Solution {
  public:
    string decToBinary(int n) {
        // code here
        if(n<=0){
            return"0";
        }
        string raj="";
        while(n>0){
            raj=to_string(n%2)+raj;
            n=n/2;
        }
        return raj;
      
        
    }
};