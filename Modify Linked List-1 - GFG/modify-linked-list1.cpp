//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        Node*ptr=head;
        vector<int>a,b;
        while(ptr)
        {
            a.push_back(ptr->data);
            b.push_back(ptr->data);
            ptr=ptr->next;
        }
        int n=a.size();
        for(int i=0;i<n/2;i++)
        {
            a[i]=a[n-i-1]-a[i];
        }
        
        int i=n/2;
        int prev=i-1;
        if(n%2)i++;
        while(i<n)
        {
            a[i++]=b[prev--];
        }
        Node*ans=NULL;
        ans=new Node(a[0]);
        ptr=ans;
        for(int i=1;i<n;i++)
        {
            Node*temp=new Node(a[i]);
            ptr->next=temp;
            ptr=ptr->next;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends