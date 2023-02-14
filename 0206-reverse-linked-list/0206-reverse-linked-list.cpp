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

// https://www.youtube.com/watch?v=bjtMCwy_LMA


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head,*prev=NULL,*nxt;
        while(curr!=NULL)
        {   
           nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            
        }
        head=prev;
        return head;
    }
};