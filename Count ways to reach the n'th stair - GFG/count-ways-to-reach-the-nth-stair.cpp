//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    
    int m=1e9+7;
    
    int helper(int curr,int n,vector<int>&dp)
    {
        if(curr==n)return 1;
        if(curr>n)return 0;
        if(dp[curr]!=-1)return dp[curr];
        int t1=(helper(curr+1,n,dp))%m;
        int t2=(helper(curr+2,n,dp))%m;
        return dp[curr]= (t1+t2)%m;
    }
    
    int countWays(int n)
    {
        // your code here
        vector<int>dp(n+1,-1);
        return helper(0,n,dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends