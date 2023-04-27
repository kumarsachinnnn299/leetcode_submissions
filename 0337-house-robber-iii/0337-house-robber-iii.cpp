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


// https://www.youtube.com/watch?v=hVEpCEWAb6Q

class Solution {
public:
    
    vector<int>helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return {0,0};//arr[0]->if parent taken, arr[1] if parent not taken
        }
        
        //taken
        int taken=root->val;
        vector<int>left=helper(root->left);
        vector<int>right=helper(root->right);
        taken+=left[0]+right[0];
        
        //nottaken
        int nottaken=0;
       
        nottaken+=max(left[1],left[0])+max(right[1],right[0]);
        
        return {nottaken,taken};
    }
    
    
    int rob(TreeNode* root) {
        
        vector<int>p;
        p=helper(root);
        return max(p[0],p[1]);
        
    }
};