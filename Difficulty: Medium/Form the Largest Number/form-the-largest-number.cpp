class Solution {
  public:
  
    static bool cmp(string a,string b){
        return a+b>b+a;
    }
    string findLargest(vector<int> &arr) {
        // code here
        //convert this into string;
        vector<string>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(to_string(arr[i]));
        }
        
        // now short using my functon cmp;
        sort(ans.begin(),ans.end(),cmp);
        
        //now join them(Concatenate);
        string result="";
        for(int i=0;i<ans.size();i++){
            result+=ans[i];
        }
        
        if(result[0]=='0')return "0";
        
        return result;
        
    }
};