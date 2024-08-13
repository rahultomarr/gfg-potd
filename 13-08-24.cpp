class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
 long long int l = 1;
        long long int r = n;
        while(l<=r){
          long long int mid = (l+r)/2.0;
          if(mid*mid<n){
              l = mid+1;
          }
          else if(mid*mid>n){
              r = mid-1;
          }
          else return floor(mid);
        }
        return l-1;
    }
};
