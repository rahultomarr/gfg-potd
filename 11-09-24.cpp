class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
   long long minCost(vector<long long>& arr) {
        // As we need to maintain sorted order, therefore use Priority Queue
        long long minCost = 0;
        
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        for(int i = 0; i < arr.size(); i++){
            pq.push(arr[i]);
        }
        
        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            
            long long sum = a + b;
            minCost += sum;
            
            pq.push(sum);
        }
        return minCost;
    }
};
