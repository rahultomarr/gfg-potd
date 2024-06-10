class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
     vector<pair<int, int>> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = {i, abs(arr[i] - brr[i])};
        }

        // Sort based on the absolute difference in descending order
        sort(diff.begin(), diff.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second;
        });

        long long totalTip = 0;
        int aCount = 0, bCount = 0;

        // Iterate through the sorted list
        for (int i = 0; i < n; ++i) {
            int idx = diff[i].first;

            if (arr[idx] >= brr[idx]) {
                if (aCount < x) {
                    totalTip += arr[idx];
                    aCount++;
                } else {
                    totalTip += brr[idx];
                    bCount++;
                }
            } else {
                if (bCount < y) {
                    totalTip += brr[idx];
                    bCount++;
                } else {
                    totalTip += arr[idx];
                    aCount++;
                }
            }
        }

        return totalTip;
    }
};
