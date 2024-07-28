class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        // code here
         int max_ones=-1;
        int max_row=-1;
        
        for(int i=0;i<arr.size();i++){ 
          int no_of_ones=0;
          for(int j=0;j<arr[i].size();j++){
           
               if(arr[i][j]==1){
                   no_of_ones++;
               }
            }
            
          
          if( no_of_ones!=0 && no_of_ones>max_ones){
               max_ones=no_of_ones;
              max_row=i;
          }
        }
     
     
    return max_row;
     
     
    }
};
