class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string str;
        int size = INT_MAX;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i].size()<size){
                size = arr[i].size();
            }
        } 
        
        string temp = arr[0];
        for(int i=0;i<size;i++){
            int count=1;
            for(int j=1;j<n;j++){
                if(temp[i]==arr[j][i]) {
                   count++;
                }
            }
            if(count<n) break;
            if(count==n) str.push_back(temp[i]);
        }
        if(str.size()==0) return "-1";
        return str;
    }
};
