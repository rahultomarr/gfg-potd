class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int r = mat.size();
    int c = mat[0].size();
    vector<vector<int>> ans(r, vector<int>(c));
    k = k % c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[i][j] = mat[i][(j + k) % c];
        }
    }
    return ans;
    }
};
