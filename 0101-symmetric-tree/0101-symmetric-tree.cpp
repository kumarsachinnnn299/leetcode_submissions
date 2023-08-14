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


// https://www.youtube.com/watch?v=nseJwpKvQuA
//Just right a fn how to check if two trees are same 
//Then just change the movement as per the mirror tree


class Solution {
public:
    bool helper(TreeNode*t1,TreeNode*t2)
    {
        if(t1!=NULL&&t2!=NULL)
        {
            bool f1=helper(t1->left,t2->right);
            bool f2=helper(t1->right,t2->left);
            if(t1->val==t2->val&&f1&&f2)
            {
                return true;
            }
            else return false;
        }
        else if(t1==NULL&&t2==NULL)return true;
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
       return helper(root,root);
    }
};