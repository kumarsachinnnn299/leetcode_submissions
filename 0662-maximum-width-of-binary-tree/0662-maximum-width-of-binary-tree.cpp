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

// https://www.youtube.com/watch?v=aGoeW3eCQ00

/*
isme indexing ka use krna h 
har node ko indexing 

index of left child= 2*(idx of parent)+1
index of right child=2*(idx of parent)+2


*/

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        long long ans=0;
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        while(!q.empty()){
            int l=q.size();
            long long la=q.back().second, f=q.front().second;
            for(int i=0; i<l; i++){
                TreeNode* temp;
                temp=q.front().first;
                long long ind=q.front().second;
                q.pop();   
                if(temp->left!=NULL){q.push({temp->left, ind*2+1});}
                if(temp->right!=NULL){q.push({temp->right, ind*2+2});}
            }
            ans=max(ans, la-f+1);
        }
        return ans;
    }
};