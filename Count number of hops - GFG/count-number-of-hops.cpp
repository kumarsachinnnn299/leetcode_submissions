//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long M=1e9+7;
    
    long long helper(int n,vector<long long>&dp)
    {
        if(n==0)return 1LL*1;
        if(n<0)return 1LL*0;
        if(dp[n]!=-1)return dp[n];
        long long t1=helper(n-1,dp);
        long long t2=helper(n-2,dp);
        long long t3=helper(n-3,dp);
        
        return dp[n]= (t1+t2+t3)%M;
    }
    
    long long countWays(int n)
    {
        vector<long long>dp(n+1,-1);
        return helper(n,dp);
        
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends