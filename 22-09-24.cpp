class Solution {
  public:
    int lps(string str) {
        // Your code goes here
     int n = str.size();
        vector<int> kmp(n);
        
        int i = 0;
        for(int j = 1; j < n; j++) {
            if(str[i] == str[j]) {
                kmp[j] = ++i;
            }
            else {
                while((--i) >= 0) {
                    i = kmp[i];
                    if(str[i] == str[j]) break;
                }
                kmp[j] = ++i;
            }
        }
        return kmp[n - 1];
    }
};
