class Solution {
public:
    int integerBreak(int n) {
        vector<int>dp(100);
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        for(int i=4;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {   int a=j;
                int b=i-j;
                dp[i]=max({dp[i],dp[a]*b,a*dp[b],dp[a]*dp[b],a*b});
            }
        }
        return dp[n];
    }
};