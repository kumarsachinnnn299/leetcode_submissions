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

// https://www.youtube.com/watch?v=qQDM1J02Sq4

class Solution {
public:
    ListNode*ptr;
    Solution(ListNode* head) {
        ptr=head;
    }
    
    int getRandom() {
        int ans=0,i=1;
        ListNode*head=ptr;
        while(head)
        {
            int x=rand();
            if(x%i==0)
            {
                ans=head->val;
            }
            i++;
            head=head->next;
        }
        return ans;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */