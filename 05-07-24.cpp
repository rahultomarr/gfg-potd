//Back-end complete function Template for C++
class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // code here
     if(!root) {
            return 0;
        }
        
        set<int> distance;
        
        // we use Queue Data Structure because we need to perform
        // level order traversal
        
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            
            Node* node = p.first;
            int hw = p.second; // horizontal Width
            distance.insert(hw);
            
            if(node->left) {
                q.push({node->left, hw - 1});
            }
            if(node->right) {
                q.push({node->right, hw + 1});
            }
        }
        return distance.size();
    }
};
