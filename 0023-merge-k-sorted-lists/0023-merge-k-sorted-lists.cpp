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


//Khud Kiya
class Solution {
public:
    
    ListNode* sortlists(ListNode*l1,ListNode*l2)
    {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1 ;
        ListNode*dummy=new ListNode();
        ListNode*temp=dummy;
        
        while(l1&&l2)
        {
         if(l1->val<l2->val)
         {
             temp->next=l1;
             l1=l1->next;
             temp=temp->next;
         }
            else{
                temp->next=l2;
             l2=l2->next;
             temp=temp->next;
            }
        }
       if(l1)temp->next=l1;
        if(l2)temp->next=l2;
        return dummy->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int f=0,s=0;
        ListNode* ans=NULL;
        while(s<lists.size())
        {
            ans=sortlists(ans,lists[s]);
            s++;
        }
        return ans;
    }
};