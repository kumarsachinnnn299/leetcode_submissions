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

// https://www.youtube.com/watch?v=tHKp8UuOkm4

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)return head;
        if(left==right)return head;
        ListNode* leftend=NULL,*rightend=NULL,*temp=head,*st,*end,*prev=NULL,*nxt;
        int c=1;
        while(c!=left&&temp!=NULL)
        {
            leftend=temp;
            temp=temp->next;
            c++;
        }
        st=temp;
        rightend=temp->next;
         while(c!=right&&temp!=NULL)
        {
           
            temp=temp->next;
             rightend=temp->next;
            c++;
        }
        end=temp;
        cout<<st->val;
        
        while(st!=rightend)
        {
         nxt=st->next;
        st->next=prev;
            prev=st;
            st=nxt;
        }
        if(leftend!=NULL)
        {
            leftend->next=prev;

        }
        temp=head;
        if(rightend!=NULL)
        {while(temp->next!=NULL)temp=temp->next;
        temp->next=rightend;}
       
        
        if(leftend==NULL)return prev;
        return head;
        
            
        
    }
};