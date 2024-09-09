class Solution {
  public:
    void sort012(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        int ite = 0;
        while(ite<=r) {
            if (arr[ite] == 0) {
                arr[ite] = arr[l];
                arr[l] = 0;
                l++;
                ite++;
                
                
            }
            else if (arr[ite] ==2) {
                arr[ite] = arr[r];
                arr[r] = 2;
                r--;
            }
            else ite++;
        }
      
    }
};
