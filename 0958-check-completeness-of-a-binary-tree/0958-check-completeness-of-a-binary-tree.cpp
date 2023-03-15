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

// https://www.youtube.com/watch?v=O_EqWFtQ45g

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        bool notexist=false;//this 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*temp=q.front();
            q.pop();
            if(temp->left)
            {
                if(notexist)return false;//agar kisi node ka siblind exist nhi krr ha or uska child //h to not a complete binary tree
                q.push(temp->left);
            }
            else{
                notexist=true;
            }
            if(temp->right)
            {
                if(notexist)return false;//agar kisi node ka left exist nhi kr rha or right exist kr rha h
                q.push(temp->right);
            }
            else notexist=true;
        }
        return true;
    }
};