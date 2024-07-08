class Solution {
  public:
    int search(vector<int>& a, int key) {
        // complete the function here
        
        int h= a.size() - 1 , l = 0 , mid ;
        while(l<=h){
            mid = l+(h-l)/2;
            if(key==a[mid]) return mid;
            if(a[mid]>=a[l]&&a[mid]<=a[h]) key<a[mid] ? h= mid-1 : l = mid+1;  // No Rotation
            else if(a[mid]>a[h]) key>a[mid]||key<=a[h] ? l = mid+1 :  h= mid-1; // Rotation Start is in Right 
            else key<a[mid]||key>=a[l] ? h = mid-1 :  l = mid+1; // Rotation Start is in Left
        }
        return -1;
    }
};
