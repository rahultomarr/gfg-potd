class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
     int  i = 0;
        long long int ans = 0;
        long long int sum = 0;
        while(i<n){
             sum = 0;
            while(i<n && arr[i] <= k){
                sum = sum + arr[i];
                i++;
            }
            i++;
            ans = max(sum , ans);
        }
        ans = max(sum , ans);
        return ans;
    }
};
