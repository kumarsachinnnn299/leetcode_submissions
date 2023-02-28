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

// https://www.youtube.com/watch?v=2OBDP3Omi30

class Solution {
public:
    vector<TreeNode*>ans;
        unordered_map<string,int>mp;

    
    string helper(TreeNode* root)
    {   
       if(root==NULL)return "#";
        string s=to_string(root->val)+" "+helper(root->left)+"rn"+helper(root->right)+"ln";
        if(mp[s]==1&&s!="#"){
            ans.push_back(root);
        cout<<s<<endl;}
        mp[s]++;
        return s;
        
    }
    
    
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        helper(root);
      
        return ans;
        
    }
};