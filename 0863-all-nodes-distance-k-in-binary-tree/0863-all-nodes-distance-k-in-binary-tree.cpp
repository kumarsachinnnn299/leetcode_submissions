/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// https://www.youtube.com/watch?v=TIzJ1OXGt9g

//Here we have to start from the target node

class Solution {
public:
    
    void ispresent(TreeNode*root, unordered_map<TreeNode*,TreeNode*>&parent,TreeNode*target, bool&flag)
    {
        if(root==NULL)return;
        if(root->val==target->val)flag=true;
        if(root->left)parent[root->left]=root;
        if(root->right)parent[root->right]=root;
        ispresent(root->left,parent,target,flag);
          ispresent(root->right,parent,target,flag);
    }
    
    void solve(  unordered_map<TreeNode*,TreeNode*>parent,  unordered_map<TreeNode*,int>vis,int h,TreeNode*root,int k,vector<int>&ans)
    {
        if(root==NULL)return;
        if(vis.find(root)!=vis.end())return;
        vis[root]=h+1;
        if(h==k)ans.push_back(root->val);
        solve(parent,vis,h+1,root->left,k,ans);
        solve(parent,vis,h+1,root->right,k,ans);
        solve(parent,vis,vis[root],parent[root],k,ans);
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        unordered_map<TreeNode*,int>vis;
        vector<int>ans;
        bool flag=false;
        ispresent(root,parent,target,flag);
        if(!root||!flag)return ans;
        
        solve(parent,vis,0,target,k,ans);
            return ans;
        
    }
};