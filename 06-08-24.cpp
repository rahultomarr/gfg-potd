class Solution {
  public:
    int isValid(string str) {
        int dotCnt=0;
        str.push_back('.');
        string res="";
        for(int i=0;i<str.length();i++){
            
            if(str[i]!='.')
            res+=str[i];
            else{
                int num=stoi(res);
                if(res.length()>3 || res.length()==0)
                return false;
                if(res[0]=='0' && res.length()>1)
                return false;
                if(num>255)
                return false;
                dotCnt++;
                res.clear();
            }
            
        }
        if(dotCnt!=4)
        return false;
        return true;
    }
};
