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
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        string str="";
        int idx=(s.size()+1)/2;
        while(!s.empty())
        {
            str+='$';
            str+=to_string(s.top());
            s.pop();
        }
        
        // int idx=(s
        int c=0;
        string n="";
        for(int i=str.size()-1;i>=0;i--)
        {
           if(str[i]!='$')
           {
               n=str[i]+n;
           }
           else{
               c++;
               if(c!=idx)s.push(stoi(n));
               n="";
           }
        }
        
        
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