class Solution{
public:

    
    void addSolution(vector<vector<int>> board, vector<vector<int>> &solution,int n)
    {
        vector<int> temp;
       for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
               if(board[j][i])
                    temp.push_back(j+1);
            }
 
        }
        
        solution.push_back(temp);
    }
    void solve(int col,vector<vector<int>> &board, vector<vector<int>> &solution,vector<int> leftrow,vector<int> LowerDia,vector<int> UpperDia,int n)
    {
        if(col == n)
        {
            addSolution(board,solution,n);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(leftrow[row] == 0 && LowerDia[row+col] ==0 && UpperDia[n-1+col-row] ==0)
            {
                board[row][col] = row+1;
                leftrow[row] =1;
                LowerDia[row+col] = 1;
                UpperDia[n-1+col-row] =1;
                solve(col+1,board,solution,leftrow,LowerDia,UpperDia,n);
                board[row][col] =0;
                leftrow[row] =0;
                LowerDia[row+col] = 0;
                UpperDia[n-1+col-row] =0;
            }
        }
        
    }

    vector<vector<int>> nQueen(int n) {
        
        
        vector<vector<int>> board(n,vector<int> (n,0));
        vector<vector<int>> solution;
        vector<int> leftrow(n,0), UpperDia(2*n-1,0),LowerDia(2*n-1,0);
        solve(0,board,solution,leftrow,UpperDia,LowerDia,n);
        
        return solution;
    }
};
