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

// https://leetcode.com/problems/reverse-nodes-in-even-length-groups/discuss/2982897/C%2B%2B-or-Faster-than-90-or-Easy-Implementation-or-Clean-and-Concise-Code-or

//Ye soln sahi tareeke se nhi h
//pointers change nhi kre h


class Solution {
public:
    void swap(ListNode*a,ListNode*b)
    {
        int temp=a->val;
        a->val=b->val;
        b->val=temp;
    }
    
    void reverse(vector<ListNode*>arr)
    {
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int i=1,c=0;
        ListNode*ptr=head;
        vector<ListNode*>arr;
        while(ptr!=NULL)
        {
            arr.push_back(ptr);
            ptr=ptr->next;
            c++;
            if(c==i)
            {
                if(c%2==0)
                {
                    reverse(arr);
                   
                }
                 arr.clear();
                    i++;
                c=0;
            }
        }
        if(c%2==0)
        {
            reverse(arr);
        }
        return head;
    }
};