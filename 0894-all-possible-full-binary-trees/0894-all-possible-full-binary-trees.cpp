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

//ND
// https://www.youtube.com/watch?v=2OYxhqhhA2k

class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n==1)return {new TreeNode(0)};
        vector<TreeNode*>ans;
        for(int i=1;i<n;i+=2)
        {
            vector<TreeNode*>left=allPossibleFBT(i);
            vector<TreeNode*>right=allPossibleFBT(n-i-1);
            
            for(auto i:left)
            {
                for(auto j:right)
                {
                    TreeNode*temp=new TreeNode();
                    temp->left=i;
                    temp->right=j;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};