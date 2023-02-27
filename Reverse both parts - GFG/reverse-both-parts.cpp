//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

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

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
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
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        
      
       
     vector<int>arr1,arr2;
     int temp=0;
     Node*ptr=head;
     while(ptr!=NULL)
     {  
        if(temp<k) arr1.push_back(ptr->data);
        else arr2.push_back(ptr->data);
        ptr=ptr->next;
        temp++;
     }
     ptr=head;
    
    for(int i=arr1.size()-1;i>=0;i--)
    {
        ptr->data=arr1[i];
        ptr=ptr->next;
    }
    for(int i=arr2.size()-1;i>=0;i--)
    {
        ptr->data=arr2[i];
        ptr=ptr->next;
    }
    
    // for(auto i:arr1)cout<<i<<' ';
    // cout<<endl;
    // for(auto i:arr2)cout<<i<<' ';
    // cout<<endl;
    return head;
    
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends