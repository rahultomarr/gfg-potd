class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
     int ans=0, increscount=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1])increscount++;
            else {
                ans=max(ans,increscount);
                increscount=0;
            }
        }
        ans=max(ans,increscount);
        return ans;
    }
};
