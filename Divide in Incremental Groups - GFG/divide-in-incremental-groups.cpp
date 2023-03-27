//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=-2Djg5dUZA8

class Solution {
  public:
    vector<vector<vector<int>>>dp;
    int help(int sum_left,int count,int prev)
    {
        if(count==0)
        {
            if(sum_left==0)return 1;
            return 0;
        }
        if(sum_left==0)return 0;
        if(dp[sum_left][prev][count]!=-1)return dp[sum_left][prev][count];
        int ways=0;
        for(int i=prev;i<=sum_left;i++)
        {
         ways+=help(sum_left-i,count-1,i);   
        }
        return dp[sum_left][prev][count]=ways;
    }
  
    int countWaystoDivide(int N, int K) {
        // Code here
        dp=vector<vector<vector<int>>>(N+1,vector<vector<int>>(N+1,vector<int>(K+1,-1)));
        return help(N,K,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends