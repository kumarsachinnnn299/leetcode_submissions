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

// https://www.youtube.com/watch?v=JjuQHV01MMo&t=354s

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        int odd=1;
        q.push(root);
        while(q.size())
        {
            int n=q.size();
            vector<int>arr;
            while(n--)
            {
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=NULL)q.push(temp->left),arr.push_back(temp->left->val);
                if(temp->right!=NULL)q.push(temp->right),arr.push_back(temp->right->val);
            }
            if(odd&&arr.size())
            {   int i=arr.size()-1;
                n=q.size();
                while(n--)
                {
                    TreeNode*temp=q.front();
                    q.pop();
                    temp->val=arr[i--];
                    q.push(temp);
                    
                }
             
            }
            odd=1-odd;
        }
        return root;
    }
};