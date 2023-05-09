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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode* temp=head;
         vector<vector<int>>matrix(m,vector<int>(n,-1));
         int r1=0,r2=m,c1=0,c2=n;
        int c=1;
        while(r1<r2&&c1<c2&&temp!=NULL)
        {
            for(int i=c1;i<c2;i++)
            {   if(temp!=NULL)
                {
                     matrix[r1][i]=temp->val;
                temp=temp->next;
                }
             else break;
               
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {   if(temp!=NULL)
               { matrix[i][c2-1]=temp->val;
                temp=temp->next;}
             else break;
            }
            c2--;
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {   if(temp!=NULL)
                   { matrix[r2-1][i]=temp->val;
                    temp=temp->next;}
                 else break;
                }
                r2--;
               
            }
             if(c2>c1)
                {
                    for(int i=r2-1;i>=r1;i--)
                    {   
                        if(temp!=NULL){matrix[i][c1]=temp->val;
                        temp=temp->next;}
                        else break;
                    }
                 c1++;
                }
        }
        return matrix;
        
    }
};