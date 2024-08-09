class Solution {
  public:
    int Maximize(vector<int> arr) {
        // Complete the function
    const long long MOD = 1e9+7;
        sort(arr.begin(), arr.end());
        long long  ans = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            ans += (i*(long long)arr[i])%MOD;    
        }
        return ans%MOD;
        // Complete the function
    }
};
