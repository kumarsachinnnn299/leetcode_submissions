// https://www.youtube.com/watch?v=12mK7j9jrlA
//NU

class Solution {
public:
    
    int M=1e9+7;
    
    long long helper(int n,int g,int k, vector<vector<long long>>&dp)
    {
        if(n==0&&g==0)return 1;
        if(n==0||g==0)return 0;
        if(dp[n][g]!=-1)return dp[n][g];
        long long ro=helper(n,g-1,k,dp)*max(0,n-k);
        long long pn=helper(n-1,g-1,k,dp)*n;
        return dp[n][g]=(ro+pn)%M;
    }
    
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<long long>>dp(n+1,vector<long long>(goal+1,-1));
        return helper(n,goal,k,dp);
    }
};