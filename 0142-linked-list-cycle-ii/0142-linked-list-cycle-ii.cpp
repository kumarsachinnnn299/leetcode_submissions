/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
        ListNode*fast=head,*slow=head,*temp=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(temp!=slow)
                {
                    slow=slow->next;
                    temp=temp->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};