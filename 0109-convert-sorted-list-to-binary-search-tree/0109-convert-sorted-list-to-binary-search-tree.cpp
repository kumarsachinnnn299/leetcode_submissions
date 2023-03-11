/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
// https://www.youtube.com/watch?v=mbEaJWHtTvQ

class Solution {
public:
    
    TreeNode*helper(vector<int>arr,int s,int e)
    {
        if(s>e)
        {
           return NULL;
        }
      
        int mid=s+(e-s)/2;
        TreeNode*node=new TreeNode(arr[mid]);
        node->left=helper(arr,s,mid-1);
        node->right=helper(arr,mid+1,e);
        return node;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp=head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        TreeNode* ans=helper(arr,0,arr.size()-1);
        return ans;
            
    }
};