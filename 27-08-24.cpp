class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
    int n = arr.size();
        stack<int> st;
        vector<int> right(n);
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty()>0 && st.top()>=arr[i]){
                st.pop();
            }
            
            right[i] = st.empty() ? 0 : st.top();
            st.push(arr[i]);
        }
        
        st = stack<int>();
        
        int ans=0;
        for(int i=0;i<n;i++){
            int rs = right[i];
            
            while(!st.empty()>0 && st.top()>=arr[i]){
                st.pop();
            }
            
            int ls = st.empty() ? 0 : st.top();
            st.push(arr[i]);
            
            ans = max(ans, abs(ls-rs) );
            
            // cout<<ls<<" "<<rs<<endl;
        }
        
        return ans;
    }
};
