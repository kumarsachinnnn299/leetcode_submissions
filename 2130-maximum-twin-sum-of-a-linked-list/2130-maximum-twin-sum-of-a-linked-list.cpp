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

//reverse second half and find ans


class Solution {
public:
    int pairSum(ListNode* head) {
        int ans=0;
        ListNode*ptr1=head,*ptr2=head,*prev;
        while(ptr2)
        {   prev=ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
            
        }
        
        
        //reversing second half of ll
        ListNode* curr=ptr1,*nxt,*prev2=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev2;
            prev2=curr;
            curr=nxt;
        }
        
        prev->next=prev2;
        
        ptr2=head;
        ptr1=prev->next;
       
        
        while(ptr1)
        {   
            int temp=(ptr1->val)+(ptr2->val);
            ans=max(ans,temp);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ans;
    }
};