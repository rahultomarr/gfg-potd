class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
    if (arr.empty()) return 0;
        
        int increase = 1; // Length of alternating sequence ending with an increase
        int decrease = 1; // Length of alternating sequence ending with a decrease
        
        for (size_t i = 1; i < arr.size(); ++i) {
            if (arr[i] > arr[i-1]) {
                increase = decrease + 1;
            } else if (arr[i] < arr[i-1]) {
                decrease = increase + 1;
            }
        }
        
        return std::max(increase, decrease);
    }
};
