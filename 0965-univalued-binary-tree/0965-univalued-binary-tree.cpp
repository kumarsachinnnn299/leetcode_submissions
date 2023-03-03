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
    int data;
    
    bool helper(TreeNode*root)
    {   if(root==NULL)return true;
        if(root->val!=data)return false;
        return helper(root->left)&&helper(root->right);
        
    }
    
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)return true;
        data=root->val;
        return helper(root);
    }
};