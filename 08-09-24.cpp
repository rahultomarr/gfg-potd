class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
     int n=arr.size();
       
       int jumps=0;  //we will store number of jumps here
       int maxReach=0,curReach=0; // we can always be at the first element
       
       for(int i=0;i<n;i++){
           if(i>maxReach)return -1;
           if(i>curReach){
               curReach=maxReach;
               jumps++;
           }
           maxReach=max(maxReach,i+arr[i]);
       }
       return jumps;
    }
};
