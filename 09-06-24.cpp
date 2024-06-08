class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
        
        bool gr = false;
        for(int i=0;i<n-1;i++,gr=!gr)
        {
            if((gr && (arr[i]<arr[i+1])) || (!gr && (arr[i]>arr[i+1])))
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
};
