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

// https://www.youtube.com/watch?v=1bU_02Q3LI0
//recursion abhi or practice krna h


class Solution {
public:
    
    int ans=0;
    
    void helper(TreeNode*root, bool leftnode, int currlength)//bool leftnode shows that we have to move in left direction
    {
        if(root==NULL)return;
        ans=max(ans,currlength);
        if(leftnode)
        {
            helper(root->left,false,currlength+1);
            helper(root->right,true,1);
        }   
        else{
            
            helper(root->right,true,currlength+1);
            helper(root->left,false,1);
        }
    }
    
    int longestZigZag(TreeNode* root) {
        helper(root, true,0);
        helper(root,false,0);
        return ans;
    }
};