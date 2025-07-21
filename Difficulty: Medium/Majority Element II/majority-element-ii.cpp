


class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int count=0;int count2=0;
        int candidate1=-1;int candidate2=-1;
        
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==candidate1){
                count++;
            }
            else if(arr[i]==candidate2){
                count2++;
            }else if(count==0){
                candidate1=arr[i];
                count=1;
            }else if(count2==0){
                candidate2=arr[i];
                count2=1;
            }else{
                count--;
                count2--;
            }
            
        }
        
        int fre1=0;int fre2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==candidate1){
                fre1++;
            }else if(arr[i]==candidate2){
                fre2++;
            }
        }
        vector<int>arr2;
        if(fre1>(n/3)){
            arr2.push_back(candidate1);
        }
        if(fre2>(n/3)){
            arr2.push_back(candidate2);
        }
        sort(arr2.begin(),arr2.end());
        return arr2;
    }
};