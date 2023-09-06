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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode*ptr=head,*prev=head;
        int n=0;
        while(ptr)
        {
            n++;
            ptr=ptr->next;
        }
        ptr=head;
//         if(n<=k)
//         {
//             for(int i=0;i<k;i++)
//             {   if(n)
//                 {ptr=ptr->next;
//                 ans.push_back(prev);
//                 prev->next=NULL;
//                 prev=ptr;
//                 n--;
//                  }
//              else ans.push_back(NULL);
                
//             }
//             return ans;
//         }
//        else{
           
           int extra=n%k;
           int normal=n/k;
           
           
           for(int i=0;i<k;i++)
           {   
               if(!ptr)ans.push_back(NULL);
               else{
                   
                    int c=1;
                    while(c<(normal+(extra>0)))
                    {
                        ptr=ptr->next;
                        c++;
                        
                        
                    }
                   ans.push_back(prev);
                   prev=ptr;
                   ptr=ptr->next;
                   prev->next=NULL;
                   prev=ptr;
                   
                   if(extra)extra--;
                   
                   
                   
               }
              
           }
           
       // }
        
        return ans;
    }
};