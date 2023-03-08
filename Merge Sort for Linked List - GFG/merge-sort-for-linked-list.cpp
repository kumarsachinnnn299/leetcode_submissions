//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

// https://www.youtube.com/watch?v=rM5EEA_rbNY

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    //Iska ek short code bhi h
    
    // Ye love babbar se kiya
    
    // https://www.youtube.com/watch?v=rM5EEA_rbNY
    
    void helpmerge(Node*first, Node*second)
    {
        if(first->next==NULL)
        {
            first->next=second;
            return;
        }
        
        Node*curr=first->next,*prev=first,*curr2=second;
        while(curr!=NULL&curr2!=NULL)
        {
            if(curr2->data>=prev->data&&curr2->data<=curr->data)
            {
                Node*temp=curr2;
                prev->next=curr2;
                curr2=curr2->next;
                temp->next=curr;
                prev=temp;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        if(curr2!=NULL&&curr==NULL)prev->next=curr2;
        
    }
    
    Node* merge(Node*first, Node*second)
    {
        if(first==NULL)return second;
        if(second==NULL)return first;
        if(first->data<second->data)
        {
            helpmerge(first,second);
            return first;
        }
        else{
            helpmerge(second,first);
            return second;
        }
        return NULL;
    }
        
    Node* getmid(Node* head)
    {
        Node*slow=head,*fast=NULL;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL||head->next==NULL)return head;
        Node* mid=getmid(head);
        Node*left=head;
        Node* right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        return merge(left,right);
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends