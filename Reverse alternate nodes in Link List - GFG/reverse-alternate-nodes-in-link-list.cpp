//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

//Khud kiya

class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        Node*curr=odd,*nxt=odd->next,*second=odd->next;
        while(nxt&&nxt->next)
        {
            curr->next=nxt->next;
            nxt->next=curr->next->next;
            curr=curr->next;
            nxt=nxt->next;
            
        }
        
        Node*prev=NULL,*curr1=second;
        
        while(curr1)
        {
            nxt=curr1->next;
            curr1->next=prev;
            prev=curr1;
            curr1=nxt;
        }
        
        curr->next=prev;
        // return odd;
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends