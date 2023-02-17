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

// https://leetcode.com/problems/minimum-distance-between-bst-nodes/discuss/3195253/Day-48-oror-C%2B%2B-oror-O(n)-time-and-O(h)-space-oror-Easiest-Beginner-Friendly-Sol

class Solution {
public:
    
    int dif=INT_MAX;
    void helper(TreeNode* root,int &mindif,int &prev)
    {if(root==NULL)return;
     helper(root->left,mindif,prev);
     if(prev!=-1)
     {
         mindif=min(mindif,root->val-prev);
         
     }
     prev=root->val;
     helper(root->right,mindif,prev);
       
    }
    
    int minDiffInBST(TreeNode* root) {
        int mindif=INT_MAX;
        int prev=-1;
        helper(root,mindif,prev);
        return mindif;
    }
};