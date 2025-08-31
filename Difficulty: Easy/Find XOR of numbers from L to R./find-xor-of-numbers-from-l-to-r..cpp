// User function Template for C++

class Solution {
  public:
  
    int find(int N){
      
            if(N%4==1)return 1;
            if(N%4==2) return N+1;
            else if(N%4==3)return 0;
            else return N;
        
    }
    int findXOR(int l, int r) {
        // complete the function here
       
            return find(l-1) ^ find(r);
        
    }
};