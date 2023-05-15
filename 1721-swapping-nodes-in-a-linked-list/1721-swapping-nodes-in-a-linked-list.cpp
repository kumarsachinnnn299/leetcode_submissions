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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*i=head,*j=head,*ptr=head;
        int temp=k,total=0,c=0;
        while(j!=NULL)
        {
            total++;
            j=j->next;
        }
        
        cout<<total;
        j=head;
        bool flag1=false,flag2=false;
        while(ptr!=NULL&&(flag1==false||flag2==false))
        {    c++;
            if(c==k)
            {
             i=ptr;   
                flag1=true;
            }
            if(c==(total-k+1))
            {
                j=ptr;
                flag2=true;
                
            }
           
            ptr=ptr->next;
        }
        
        int val=j->val;
        j->val=i->val;
        i->val=val;
        
        
        // cout<<c;
        return head;
        
    }
};