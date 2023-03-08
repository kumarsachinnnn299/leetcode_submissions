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
    
    void merge(ListNode*first, ListNode*second)
    {   ListNode*prev=first,*curr=first->next;
        //If only one element in first
        if(first->next==NULL)
        {
            first->next=second;
        }
        
        
        while(curr!=NULL&second!=NULL)
        {   
            if(second->val>=prev->val&&second->val<=curr->val)
            {
                ListNode*temp=second;
                second=second->next;
                prev->next=temp;
                temp->next=curr;
                prev=prev->next;
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
            
        }
     if(curr==NULL&&second!=NULL)prev->next=second;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        if(list1->val>list2->val)
        {
            merge(list2,list1);
            return list2;
        }
        else{
             merge(list1,list2);
            return list1;
        }
        return NULL;
    }
};