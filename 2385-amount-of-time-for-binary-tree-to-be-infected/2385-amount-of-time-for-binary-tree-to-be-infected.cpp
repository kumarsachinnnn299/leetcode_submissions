/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void buildGraph(TreeNode*root,vector<vector<int>>&adj)
    {
        if(!root)return;
        if(root->left){
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
            }
        if(root->right)
        {
             adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
        }
        buildGraph(root->left,adj);
         buildGraph(root->right,adj);
        
        
    }
    
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>>adj(100001);
        vector<int>vis(100001);
        buildGraph(root,adj);
        queue<int>q;
        q.push(start);
        int ans=0;
        while(!q.empty())
        {
             int temp=q.size();
            for(int i=0;i<temp;i++)
            {
                int front=q.front();
                vis[front]=1;
                q.pop();
               
                    for(auto x:adj[front])
                    {
                        if(vis[x]==0){
                            vis[x]=1;
                            q.push(x);
                        }
                    }
                
            }
         ans++;
        }
       
        
        return ans-1;
        
    }
};