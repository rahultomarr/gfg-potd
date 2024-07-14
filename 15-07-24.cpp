class Solution {
  public:
    int getsum(int n) {
        int sum = 0;
        while(n != 0) {
            int digit = n % 10;
            sum += digit ;
            n = n / 10;
        }
        return sum ;
    }
    string smallestNumber(int s, int d) {
        
        //not possible 
        if(s > (9*d)) {
            return "-1" ;
        }
        
        //possible 
        int start = pow(10,d-1) ;
        int end = pow(10,d) - 1 ;
        for(int i = start; i <= end; i++) {
            int digsum = getsum(i) ;
            if(digsum == s) {
                return to_string(i) ;
            }
        }
    }
};
