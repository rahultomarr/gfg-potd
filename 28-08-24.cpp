class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
    map<int,int> mp1;
        for(int i=0;i<arr.size();i++){
            mp1[arr[i]]++;
        }
        
        map<int,vector<int> > mp2;
 
 
        for(auto i: mp1){
               mp2[i.second].push_back(i.first);
        }
        
        
        vector<int> ans;
    for(auto i=mp2.rbegin();i!=mp2.rend();i++){
            for(auto j: i->second){
                int ind=i->first;
               while(ind){
                  ans.push_back(j);
                  ind--;
              }
          }
    }
   
    return ans;
        
    }

};
