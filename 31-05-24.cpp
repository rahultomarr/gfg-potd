 Solution {
  public:
    int swapNibbles(int n) {
        // code here
        return ((n&15)<<4|(n&240)>>4); 
    }

 };
