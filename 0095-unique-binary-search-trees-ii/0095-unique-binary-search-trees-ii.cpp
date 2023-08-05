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

// https://www.youtube.com/watch?v=VnuYfCwuEg8

class Solution {
public:
    
    vector<TreeNode*>helper(int s,int e)
    {   vector<TreeNode*>ans;
        if(s>e||s<1)
        {
            
            ans.push_back(NULL);
            return ans;
        }
        if(s==e)
        {
            TreeNode*temp=new TreeNode(s);
            ans.push_back(temp);
            return ans;
        }
     
        for(int i=s;i<=e;i++)
        {
            vector<TreeNode*>lt=helper(s,i-1);
            vector<TreeNode*>rt=helper(i+1,e);
            for(int j=0;j<lt.size();j++)
            {
                for(int k=0;k<rt.size();k++)
                {
                    TreeNode*temp=new TreeNode(i);
                    temp->left=lt[j];
                    temp->right=rt[k];
                    ans.push_back(temp);
                    
                }
            }
        }
     return ans;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
    }
};