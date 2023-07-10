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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        
        if(root->left==NULL&&root->right==NULL)return 1;
        int l=0,r=0;
        if(root->left)l=minDepth(root->left);
        if(root->right)r=minDepth(root->right);
     if(l==0)return 1+r;
        else if(r==0)return 1+l;
        else return 1+min(l,r);
        
     
    }
};