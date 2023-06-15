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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=0,prevsum=INT_MIN,ans=1,level=0;
        while(!q.empty())
        {   
            int n=q.size();
            sum=0;
            level++;
            for(int i=0;i<n;i++)
            {
                auto temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(sum>prevsum){
                ans=level;
                prevsum=sum;
            }
        }
        return ans;
    }
};