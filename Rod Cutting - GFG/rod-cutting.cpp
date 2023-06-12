//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=YkzvvxJHlic
//standard dp

class Solution{
  public:
    
    int helper(int idx,int len,int price[],vector<vector<int>>&dp)
    {
        if(idx+1>len)return 0;
        if(dp[idx+1][len]!=-1)return dp[idx+1][len];
        int a=helper(idx+1,len,price,dp);
        int b=price[idx]+helper(idx,len-idx-1,price,dp);
        return dp[idx+1][len]=max(a,b);
    }
  
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(0,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends