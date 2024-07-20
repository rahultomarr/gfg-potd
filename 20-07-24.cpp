class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
    if(!root){
            return root;
        }
        Node* left = RemoveHalfNodes(root->left);
        Node* right = RemoveHalfNodes(root->right);
        if(!left && right || !right && left){
            root = left?left:right;
        }
        else{
            root->left = left;
            root->right = right;
        }
        return root;
    }
};
