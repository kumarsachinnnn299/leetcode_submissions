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
    int level=1;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>temp2;
            for(int i=0;i<n;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                temp2.push_back(temp->val);
                
               if(temp->left!=NULL)q.push(temp->left);
                     if(temp->right!=NULL)q.push(temp->right);
                    
                
            }
            if(level%2==0)reverse(temp2.begin(),temp2.end());
            ans.push_back(temp2);
            level=1-level;
        }
        return ans;
    }
};