//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/

//Similar to printing all nodes at distance k form target node
// https://www.youtube.com/watch?v=_mOBzuXKIxw

class Solution{

    public:
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        int ans=0;
        unordered_map<Node*,Node*>parent;
        queue<Node*>q;
        q.push(root);
        Node*target;
        unordered_map<Node*,bool>vis;
        // parent[root]=NULL;
        while(!q.empty())
        {   int s=q.size();
            for(int i=0;i<s;i++)
            {
                 Node*temp=q.front();
            q.pop();
            if(temp->data==home)target=temp;
            if(temp->left!=NULL)
            {
                q.push(temp->left);
                parent[temp->left]=temp;
            }
             if(temp->right!=NULL)
            {
                q.push(temp->right);
                parent[temp->right]=temp;
            }
            }
           
        }
        
        q.push(target);
        
        int d=0;
        while(!q.empty())
        {   int s=q.size();
            for(int i=0;i<s;i++)
            {
                Node*temp=q.front();
                q.pop();
                ans+=(temp->data);
                vis[temp]=true;
                if(temp->left!=NULL&&vis[temp->left]==false)
                {
                q.push(temp->left);
               
                }
                if(temp->right!=NULL&&vis[temp->right]==false)
                {
                q.push(temp->right);
               
                }
            
                if(parent[temp]!=NULL&&vis[parent[temp]]==false)q.push(parent[temp]);
            }
            d++;
            if(d>k)break;
        }
        return ans;
        
    }


};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int home,k;
        cin>> home >> k;
        getchar();
        Solution obj;
        cout<< obj.ladoos(root,home,k) << endl;
    }
	return 0;
}


// } Driver Code Ends