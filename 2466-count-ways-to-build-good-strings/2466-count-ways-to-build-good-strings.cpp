
// https://www.youtube.com/watch?v=PEJ883NDE4A
//Traditional dp ka hi question h
//Simple

class Solution {
public:
    int mod=1e9+7;
    
    int helper(int length,int zero ,int one, vector<int>&dp)
    {
        if(length==0)return 1;
        if(length<0)return 0;
        if(dp[length]!=-1)return dp[length];
        long long sum;
        sum=(helper(length-zero,zero,one,dp)+helper(length-one,zero,one,dp))%mod;
        return dp[length]=(sum%mod);
    }
    
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans=0;
        vector<int>dp(high+1,-1);
        for(int i=low;i<=high;i++)
        {
            ans=((ans%mod)+(helper(i,zero,one,dp)%mod))%mod;
        }
        return ans;
    }
};