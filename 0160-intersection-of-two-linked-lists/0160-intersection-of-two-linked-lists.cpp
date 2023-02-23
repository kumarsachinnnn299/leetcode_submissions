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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     int c1=0,c2=0;
        ListNode*temp1=headA,*temp2=headB;
        while(temp1!=NULL)
        {
            c1++;
            temp1=temp1->next;
        }
         while(temp2!=NULL)
        {
            c2++;
            temp2=temp2->next;
        }
        int dif=abs(c1-c2);
        temp1=headA;
        temp2=headB;
        if(c1>c2)
        {
            while(dif--)
            {
                temp1=temp1->next;
            }
        }
        if(c1<c2)
        { while(dif--)
            {
                temp2=temp2->next;
            }
            
        }
        while(true)
        {
            if(temp1==temp2)return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
    
};