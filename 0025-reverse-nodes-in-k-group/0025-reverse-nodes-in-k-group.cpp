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

// https://www.youtube.com/watch?v=EKgNMFCShO8

class Solution {
public:
    ListNode*thead=NULL,*ttail=NULL;
    
    void addfront(ListNode*node)
    {
        if(thead==NULL)
        {
            thead=node;
            ttail=node;
        }
        else{
            node->next=thead;
            thead=node;
        }
    }
    
    
    int gettotalnodes(ListNode*head)
    {
         ListNode*curr=head;
        int tnodes=0;
         while(curr!=NULL)
        {
            tnodes++;
            curr=curr->next;
        }
        return tnodes;
    }
    
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*ohead=NULL,*otail=NULL,*curr=head;
        if(head==NULL||head->next==NULL||k==0)return head;
        int len=gettotalnodes(head);
        while(len>=k)
        {
            int temp=k;
            while(temp--)
            {
                ListNode* node=curr->next;
                curr->next=NULL;
                                addfront(curr);
                curr=node;

            }
           if(ohead==NULL&&otail==NULL)
           {
               ohead=thead;
               otail=ttail;
           }
            else{
                otail->next=thead;
                otail=ttail;
            }
            thead=NULL;
            ttail=NULL;
            len-=k;
        }
        if(len)
        {
            otail->next=curr;
        }
        
        return ohead;
        
    }
};