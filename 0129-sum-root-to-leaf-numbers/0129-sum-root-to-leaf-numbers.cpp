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
    vector<string>arr;
    
    void helper(TreeNode*root,string str)
    {
        
        if(root==NULL)return;
            str+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            arr.push_back(str);
            return;
        }
        helper(root->left,str);
        helper(root->right,str);
       
    }
    
    int sumNumbers(TreeNode* root) {
        helper(root,"");
        // for(auto i:arr)cout<<i<<' ';
        int ans=0;
        for(auto i:arr)
        {
            int temp=stoi(i);
            ans+=temp;
        }
        return ans;
    }
};