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

// https://www.youtube.com/watch?v=jCE4XmjEbx8

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        
        ListNode*prev=NULL,*curr=head,*nxt=head->next;
        head=head->next;
        while(curr&&nxt)
        {
            if(prev)
            {
                prev->next=nxt;
            }
            curr->next=nxt->next;
            nxt->next=curr;
            prev=curr;
            curr=curr->next;
            if(curr)
            {
                nxt=curr->next;
            }
        }
        return head;
    }
};