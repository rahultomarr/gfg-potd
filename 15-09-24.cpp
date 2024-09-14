class Solution {
  public:
    Node* head = NULL;
    Node* tail=NULL;
    Node* bToDLL(Node* root) {
        if(!root) return NULL;
        bToDLL(root->left);
        
        if(!head) head=root;
        if(tail) tail->right=root;
        root->left=tail;
        tail=root;
        
        bToDLL(root->right);
        return head;
    }
 
};
