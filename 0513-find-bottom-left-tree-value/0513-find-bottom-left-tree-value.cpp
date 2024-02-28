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
    
    //Done
    
    void helper(TreeNode*root, int &ans,int &maxl,int cl)
    {
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL)
        {
            if(cl>maxl)
            {
                ans=root->val;
                maxl=cl;
                return;
            }
        }
        
        helper(root->left,ans,maxl,cl+1);
         helper(root->right,ans,maxl,cl+1);
        
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
        int ans,maxl=-1;
        helper(root,ans,maxl,0);
        return ans;
    }
};