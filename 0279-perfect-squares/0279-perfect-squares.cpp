class Solution {
public:
    
    // https://www.youtube.com/watch?v=aJTCcyPrPOA
    int helper(int n,vector<int>&dp)
    {
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int ans=n;
        
        for(int i=1;i*i<=n;i++)
        {
            ans=min(ans,1+helper(n-(i*i),dp));
        }
        return dp[n]=ans;
    }
    
    int numSquares(int n) {
        vector<int>dp(10001,-1);
        return helper(n,dp);
    }
};