
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        
          int n = s.size();
        string ans;
        
        //removing leading zeroes
        int j = 0;
        while(s[j] == '0'){
            j++;
        }
        
        
        int i = n-1;
        //while there is we push 0 in the ans string
        while(i >= j && s[i] == '1'){
            ans += '0';
            i--;
        }
       

 

        //add 1 before all 0's        

        ans += '1';
        i--;
        

       //push all remaining  elements of s
        while(i >= j){
            ans += s[i];
            i--;
        }
        

        //reverse the list because we moving from right to left and adding elements in ans from left to right
        reverse(ans.begin(), ans.end());
        
        return ans;
    
    }
};
