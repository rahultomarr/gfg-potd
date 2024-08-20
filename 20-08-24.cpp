class Solution {
  private:
    void fill_parent(unordered_map<Node*,Node*> &parent,Node* root,Node* & tNode,int t){
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node * node = q.front();
            q.pop();
            
            if(t == node->data){
                tNode = node;
            }
            
            if(node->left){
                parent[node->left] = node;
                q.push(node->left);
            }
            if(node->right){
                parent[node->right] = node;
                q.push(node->right);
            }
        }
    }
  public:
    int minTime(Node* root, int target) {
        unordered_map<Node*,Node*> parent;
        unordered_map<int,int> vis;
        
        Node * tNode=NULL;
        fill_parent(parent,root,tNode,target);
        
        queue<pair<Node*,int>> q;
        q.push({tNode,0});
        vis[target] = 1;
        int maxSteps=0;
        
        while(!q.empty()){
            Node * node = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            maxSteps = max(maxSteps,steps);
            
            if(node->left && !vis.count(node->left->data)){
                vis[node->left->data] = steps+1;
                q.push({node->left,steps+1});
            }
            if(node->right && !vis.count(node->right->data)){
                vis[node->right->data] = steps+1;
                q.push({node->right,steps+1});
            }
            if(parent[node] && !vis.count(parent[node]->data)){
                vis[parent[node]->data] = steps+1;
                q.push({parent[node],steps+1});
            }
        }
        return maxSteps;
    }
};
