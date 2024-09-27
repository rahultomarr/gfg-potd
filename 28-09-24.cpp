class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
     int n=arr.size();
        vector<int>v(n);
        for(int i=1;i<n;i++){
            int mjmp=INT_MAX;
            for(int j=1;j<k+1;j++){
                if(i-j>=0){
                    int jmp=v[i-j]+abs(arr[i]-arr[i-j]);
                    mjmp=min(mjmp,jmp);
                }
                v[i]=mjmp;
            }
        }
        return v[n-1];
    }
};
