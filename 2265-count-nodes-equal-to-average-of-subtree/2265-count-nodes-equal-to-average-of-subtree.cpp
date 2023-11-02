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
    
    pair<int,int>helper(TreeNode*root)
    {
        if(root==NULL)return {0,0};
        auto templ=helper(root->left);
        auto tempr=helper(root->right);
        return {root->val+templ.first+tempr.first,1+templ.second+tempr.second};
    }
    
    
    void inorder(TreeNode*root,int&ans)
    {
        if(root==NULL)return ;
        auto temp=helper(root);
        int ts=temp.first;
        int tc=temp.second;
        if((ts/tc)==root->val)ans++;
        
        inorder(root->left,ans);
        inorder(root->right,ans);
        
        
    }
    
    int averageOfSubtree(TreeNode* root) {
        
        int ans=0;
        inorder(root,ans);
        return ans;
        
    }
};