//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void helper(stack<int>&st,int s,int n)
    {
        if((n%2)&&(s==(n+1)/2)||(n%2==0)&&(s==(n/2)+1))
        {
            st.pop();
            return;
        }
        
        int temp=st.top();
        st.pop();
        helper(st,s+1,n);
        st.push(temp);
    }
    
    void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        helper(s,1,n);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends