//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.

//Khud se kiya
//Similar question on Leetcode


int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n1=0,n2=0;
    Node*temp=head1;
    while(temp!=NULL)
    {
        n1++;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL)
    {
        n2++;
        temp=temp->next;
    }
    
    int dif=abs(n2-n1);
    if(n2>n1)
    {
        while(dif--)
        {
            head2=head2->next;
        }
    }
    else{
         while(dif--)
        {
            head1=head1->next;
        }
    }
    
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1==head2)return head1->data;
         head1=head1->next;
         head2=head2->next;
        
    }
    
    return -1;
    
}

