//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=bzkUQEppDkk

class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        
        long long int  dp[3][N];
        dp[0][0]=r[0];
        dp[1][0]=g[0];
        dp[2][0]=b[0];
        int ans;
        for(int i=1;i<N;i++)
        {
            dp[0][i]=r[i]+min(dp[1][i-1],dp[2][i-1]);
            dp[1][i]=g[i]+min(dp[2][i-1],dp[0][i-1]);
            dp[2][i]=b[i]+min(dp[0][i-1],dp[1][i-1]);
            
        }
        return min(dp[0][N-1],min(dp[1][N-1],dp[2][N-1]));
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends