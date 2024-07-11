class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
       if(target>=root->data)target-=root->data;
        else return 0;
        if(target==0 && root->left==NULL && root->right==NULL)return 1;
        if(root->left!=NULL && hasPathSum(root->left,target))return 1;
        if(root->right!=NULL && hasPathSum(root->right,target))return 1;
        return 0;
    }
};
