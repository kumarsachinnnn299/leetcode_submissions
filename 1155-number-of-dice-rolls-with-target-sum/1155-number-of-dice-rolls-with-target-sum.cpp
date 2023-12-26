class Solution {
public:
    
    int mod=1e9+7;
    
    int helper(int cdice,int sum,int k,int target,int tdice,vector<vector<int>>&dp)
    {
        if(cdice==tdice)
        {
            if(sum==target)return 1;
            return 0;
        }
        if(dp[cdice][sum]!=-1)return dp[cdice][sum]%mod;
        int temp=0;
        for(int i=1;i<=k;i++)
        {
            temp=(temp+helper(cdice+1,(sum+i)%mod,k,target,tdice,dp))%mod;

        }
        return (dp[cdice][sum]=temp)%mod;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        if(target<n)return 0;
        int sum=(k*(k+1))/2;
        sum*=n;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        
        return helper(0,0,k,target,n,dp);
    }
};