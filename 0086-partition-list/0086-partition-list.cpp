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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1=new ListNode(),*l2=new ListNode();
        ListNode*ptr1=l1,*ptr2=l2,*cur=head;
        while(cur)
        {
            if(cur->val<x)
            {
                ptr1->next=new ListNode(cur->val);
                ptr1=ptr1->next;
            }
            else{
                 ptr2->next=new ListNode(cur->val);
                ptr2=ptr2->next;
            }
            cur=cur->next;
        }
        
        ptr1->next=l2->next;
        // l1=l1->next;
        // while(l1)
        // {
        //     cout<<l1->val<<' ';
        //     l1=l1->next;
        // }
        
        return l1->next;
    }
};