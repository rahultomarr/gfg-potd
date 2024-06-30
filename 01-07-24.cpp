
/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

// Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    // Your code here
 if(head==nullptr)   return;
    Node* temp=head;
    root=new TreeNode(head->data);
    temp=temp->next;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* temp1=q.front();
        q.pop();
        if(temp)
        {
            TreeNode* neww=new TreeNode(temp->data);
            temp1->left=neww;
            temp=temp->next;
            q.push(neww);
        }
        if(temp)
        {
            TreeNode* neww=new TreeNode(temp->data);
            temp1->right=neww;
            temp=temp->next;
            q.push(neww);
        }
        if(temp==nullptr)   return;
    }
}
