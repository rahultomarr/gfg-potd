class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
      vector<int>ans;
        vector<int>temp;
        // ans.push_back(0);
        int count = 0;
        for(int i=q-1;i>=0;i--){
            if(queries[i][0]==1){
                count = count ^ queries[i][1];
            }
            else{
                ans.push_back(queries[i][1]);
                temp.push_back(count);
            }
        }
        
        
        for(int i=0;i<ans.size();i++){
            ans[i]^=temp[i];
        }
        ans.push_back(count^0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
