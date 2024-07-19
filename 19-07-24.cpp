class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
         vector<int> ans;
        
        vector<int> res;
        
        for(int i=arr.size()-1;i>=0;i--){
            int index=lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
            res.push_back(index);    
            
            if(index==ans.size()){
                ans.push_back(arr[i]);
            }
            else{
                ans.insert(ans.begin()+index,arr[i]);
            }
            
        }
        reverse(res.begin(),res.end());
        return(res);
        
    }
};
