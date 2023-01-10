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


// https://leetcode.com/problems/same-tree/discuss/3027456/C%2B%2BororRecursion(one-line)and-iterative-solution-with-explaination

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)return true;
        if(p==NULL||q==NULL)return false;
        return (p->val==q->val&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
    }
};