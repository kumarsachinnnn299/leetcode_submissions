//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=1qD1FLhKrIE&t=901s

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>dp(n+1,INT_MAX);
       dp[0]=-1;
       for(int i=0;i<n;i++)
       {
           int idx=upper_bound(dp.begin(),dp.end(),a[i])-dp.begin();
           if(a[i]>dp[idx-1]&&dp[idx]>a[i])dp[idx]=a[i];
       }
       for(int i=n;i>=0;i--)if(dp[i]!=INT_MAX)return i;
       return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends