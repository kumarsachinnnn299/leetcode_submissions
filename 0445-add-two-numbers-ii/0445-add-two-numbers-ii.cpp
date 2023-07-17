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
    ListNode* addTwoNumbers(ListNode* r1, ListNode* r2) {
        int prev=0;
      string n1,n2,n3;
        while(r1)
        {   n1+=to_string(r1->val);
            r1=r1->next;
        }
        
        while(r2)
        {   n2+=to_string(r2->val);
             r2=r2->next;
        }       
       int c1=n1.size()-1,c2=n2.size()-1;
        while(c1>=0&&c2>=0)
        {
            int sum=(n1[c1]-'0')+(n2[c2]-'0')+prev;
            n3=to_string(sum%10)+n3;
            prev=sum/10;
            c1--;
            c2--;
        }
        
        while(c1>=0)
        {
            int sum=(n1[c1]-'0')+prev;
            n3=to_string(sum%10)+n3;
            prev=sum/10;
            c1--;
        }
        
          while(c2>=0)
        {
            int sum=(n2[c2]-'0')+prev;
            n3=to_string(sum%10)+n3;
            prev=sum/10;
            c2--;
        }
        
        if(prev)n3=to_string(prev)+n3;
        ListNode*ans,*ptr;
        ans=new ListNode(n3[0]-'0');
        ptr=ans;
        
            for(int i=1;i<n3.size();i++){
                ptr->next=new ListNode(n3[i]-'0');
                ptr=ptr->next;
            }
                
      
                return ans;
    }
};