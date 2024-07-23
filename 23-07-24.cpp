class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
    vector<int>ans;
        stack<Node*>st1, st2;
        while(1){
            while(root1){
                st1.push(root1);
                root1 = root1 -> left;
            }
      
            while(root2){
                st2.push(root2);
                root2 = root2 -> left;
            }
            
            if(st1.empty() && st2.empty())
                break;
            
            Node *curr1 = nullptr, *curr2 = nullptr;
            if(!st1.empty())
                curr1 = st1.top();
            
            if(!st2.empty())
                curr2 = st2.top();
            
            
            if(curr1 && curr2){
                if(curr1 -> data <= curr2 -> data){
                    ans.push_back(curr1 -> data);
                    curr1 = curr1 -> right;
                    st1.pop();
                    root1 = curr1;
                }
                else{
                    ans.push_back(curr2 -> data);
                    curr2 = curr2 -> right;
                    st2.pop();
                    root2 = curr2;
                }
            }   
            else if(curr1){
                ans.push_back(curr1 -> data);
                st1.pop();
                curr1 = curr1 -> right;
                root1 = curr1;
            }
            else{
                ans.push_back(curr2 -> data);
                st2.pop();
                curr2 = curr2 -> right;
                root2 = curr2;
            }
        }
        return ans;
    }
};
