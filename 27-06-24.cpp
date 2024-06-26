bool isToepliz(vector<vector<int>>& mat) {
    // code here
    
     int check = mat[0][0];
            int m= mat.size();
            int n= mat[0].size();

            for(int i=1;i<m && i<n; i++){

                 if(mat[i][i] != check) return false;
            }
            return true;
    
}
