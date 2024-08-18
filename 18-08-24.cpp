class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
    int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
        }
        int perfix=0;
        for(int i=0; i<arr.size()-1; i++){
            perfix+=arr[i];
            int ans=sum-perfix;
            if(ans==perfix)
            return true;
            
        }
        return false;
    }
};
