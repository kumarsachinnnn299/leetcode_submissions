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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode*ptr=dummy;
        int sum=0;
        unordered_map<int,ListNode*>mp;
        mp[0]=dummy;
        while(head)
        {
            sum+=(head->val);
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=head;
            }
            else{
                ListNode*start=mp[sum];
                ListNode*temp=start;
                int psum=sum;
                while(temp!=head)
                {
                    temp=temp->next;
                    psum+=temp->val;
                    if(temp!=head)
                    mp.erase(psum);
                }
                
                start->next=head->next;
              
            }
            head=head->next;
        }
        return dummy->next;
    }
};