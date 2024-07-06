class Solution {
  public:
    void inOrder(Node* root, stack<Node*>& st){
        if(!root)
            return;
        inOrder(root->left, st);
        st.push(root);
        inOrder(root->right, st);
    }
    void populateNext(Node *root) {
        // code here
        stack<Node*> st;
        inOrder(root, st);
        Node* prev = st.top();
        st.pop();
        while(!st.empty()){
            Node* tr = st.top();
            tr->next = prev;
            prev = tr;
            st.pop();
        }
    }
};
