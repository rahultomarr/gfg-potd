class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
 int c[maxx]={},res=0;
        for(int i=0;i<n;i++){
            c[l[i]-1]++;
            c[r[i]]--;
        }
        for(int i=1;i<maxx;i++) c[i]+=c[i-1];
        for(int i=1;i<maxx;i++) if(c[res]<c[i]) res=i;
        return res+1;
    }
};
