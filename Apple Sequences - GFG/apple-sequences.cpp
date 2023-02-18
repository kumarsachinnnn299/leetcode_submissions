//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++



// https://discuss.geeksforgeeks.org/comment/58eb45f67bccf0a93f613cabee7eb68b


class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int s=0,end=0,co=0,ans=0;
        while(end<n)
        {
            if(arr[end]=='O')co++;
            while(s<n&&co>m)
            {
                if(arr[s]=='O')co--;
                s++;
            }
            ans=max(ans,end-s+1);
            end++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends