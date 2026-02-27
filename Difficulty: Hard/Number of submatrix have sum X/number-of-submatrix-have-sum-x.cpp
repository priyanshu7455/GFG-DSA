class Solution {
  public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> pre(n+1, vector<int>(m+1,0));
        
        // Build prefix sum matrix
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pre[i][j] = mat[i-1][j-1] 
                            + pre[i-1][j] 
                            + pre[i][j-1] 
                            - pre[i-1][j-1];
            }
        }
        
        int count = 0;
        int maxSize = min(n,m);
        
        for(int size=1; size<=maxSize; size++){
            for(int i=0; i+size<=n; i++){
                for(int j=0; j+size<=m; j++){
                    
                    int r1 = i, c1 = j;
                    int r2 = i + size - 1;
                    int c2 = j + size - 1;
                    
                    int sum = pre[r2+1][c2+1] 
                              - pre[r1][c2+1] 
                              - pre[r2+1][c1] 
                              + pre[r1][c1];
                    
                    if(sum == x)
                        count++;
                }
            }
        }
        
        return count;
    }
};