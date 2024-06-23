class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        
         int cnt = 0;
        stack<int> stk;
        vector<int> res;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='('){
                cnt++;
                res.push_back(cnt);
                stk.push(cnt);
            }else if(str[i]==')'){
                res.push_back(stk.top());
                stk.pop();
            }
        }
        return res;
    }
};
