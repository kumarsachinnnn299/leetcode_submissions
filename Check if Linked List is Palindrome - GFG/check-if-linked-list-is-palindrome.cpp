//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Khud se kiya

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int n=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        int c=0;
        bool isoddlength=false;
        if(n%2)isoddlength=true;
        n/=2;
        temp=head;
        string s1="",s2;
        if(isoddlength)
        {
            while(temp!=NULL)
            {
                if(c<n)s1+=to_string(temp->data);
                if(c>n)s2=to_string(temp->data)+s2;
                c++;
                temp=temp->next;
            }  
        }
        else{
            while(temp!=NULL)
            {
                if(c<=n-1)s1+=to_string(temp->data);
                if(c>=n)s2=to_string(temp->data)+s2;
                c++;
                temp=temp->next;
            }
        }
        return s1==s2;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends