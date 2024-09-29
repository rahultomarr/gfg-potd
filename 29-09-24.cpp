class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
     int ans=0;
        for(int val:arr)
        {
            ans=ans+(val+k-1)/k;
        }
        return ans;
    }
};
