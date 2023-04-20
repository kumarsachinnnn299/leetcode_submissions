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
        if(!root)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=0;
        
        while(!q.empty())
        {
            int n=q.size();
            long long fidx=q.front().second;
           long long lidx=q.back().second;
            for(int i=0;i<n;i++)
            {
                auto temp=q.front();
                q.pop();
                long long idx=temp.second;
                if(temp.first->left)
                {   
                    q.push({temp.first->left,idx*2+1});
                }
                if(temp.first->right)
                {
                    q.push({temp.first->right,idx*2+2});
                }
            }
            
            ans=max(ans,lidx-fidx+1);
            
        }
        return ans;
    }
};