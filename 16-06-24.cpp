class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
    vector<int> vec;
        vector<bool> isprime(n+1,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*i;j<n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        for(int i=2;i<=n/2;i++){
            if(isprime[i] and isprime[n-i]){
                
                vec.push_back(i);
                vec.push_back(n-i);
                return vec;
            }
        }
        vec.push_back(-1);
        vec.push_back(-1);
        return  vec;
    }
};
