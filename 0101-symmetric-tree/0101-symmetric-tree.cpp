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
     vector<int>lefta,righta;
    void preorder(TreeNode*root,bool flag){
        if(flag)
        {
            if(root==NULL){
                lefta.push_back(200);
                return;
            }
            lefta.push_back(root->val);
            preorder(root->left,true);
            preorder(root->right,true);
            
        }
        else{
            if(root==NULL){
                righta.push_back(200);
                return;}
            righta.push_back(root->val);
            preorder(root->right,false);
            preorder(root->left,false);
            
        }
            
    }
    
    bool isSymmetric(TreeNode* root) {
       
        preorder(root->left,true);
        preorder(root->right,false);
        for(auto i:lefta)cout<<i<<' ';
        cout<<endl;
        for(auto i:righta)cout<<i<<' ';
        
        if(lefta.size()!=righta.size())return false;
        for(int i=0;i<lefta.size();i++)
        {
            if(righta[i]!=lefta[i])return false;
        }
        return true;
    }
};