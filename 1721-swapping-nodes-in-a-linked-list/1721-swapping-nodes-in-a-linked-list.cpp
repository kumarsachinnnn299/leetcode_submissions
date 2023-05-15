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
        while(ptr!=NULL)
        {    c++;
            if(c==k)
            {
             i=ptr;   
            }
            if(c==(total-k+1))
            {
                j=ptr;
                
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