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


//Brute force

class Solution {
public:
    
    int count(TreeNode*root)
    {
        if(root==NULL)return 0;
        return 1+count(root->left)+count(root->right);
    }
    
    int sumf(TreeNode*root)
    {
        if(root==NULL)return 0;
        return sumf(root->left)+sumf(root->right)+root->val;
    }
    
    void inorder(TreeNode*root,int&ans)
    {
        if(root==NULL)return ;
        int l=sumf(root->left);
        int r=sumf(root->right);
        int lc=count(root->left);
        int rc=count(root->right);
        int ts=l+r+root->val;
        int tc=lc+rc+1;
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