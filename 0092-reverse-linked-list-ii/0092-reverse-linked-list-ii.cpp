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

//Khud kiya

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head->next==NULL||left==right)return head;
        
        ListNode*st,*end,*ptr=head,*pl,*nr;
        int c=1;
        while(ptr)
        {   if(c==left-1)pl=ptr;
            if(c==left)st=ptr;
            if(c==right){
                end=ptr;
            nr=ptr->next;
                break;
                }
            c++;
            ptr=ptr->next;
        }
        
        ListNode* prev=NULL,*nxt,*temp=st;
        // return temp;
        int len=right-left+1;
        while(len--)
        {
            nxt=st->next;
            st->next=prev;
            prev=st;
            st=nxt;
        }
        
        
        if(left!=1)pl->next=prev;
        if(left==1)head=prev;
        temp->next=nr;
        
        return head;
            
    }
};