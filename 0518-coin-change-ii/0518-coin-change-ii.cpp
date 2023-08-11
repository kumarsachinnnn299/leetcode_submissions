//Khud kiya
//Using recursion and dp

class Solution {
public:
    
       int helper(int idx,vector<int >coins,int N,int sum,vector<vector< int>>&dp)
    {    if(sum==0)return 1;
        if(sum<0||idx>=N)return 0;
        if(dp[idx][sum]!=-1)return dp[idx][sum];
        sum-=coins[idx];
        long long int take=helper(idx,coins,N,sum,dp) ;
        sum+=coins[idx];
        long long int nt=helper(idx+1,coins,N,sum,dp);
        return dp[idx][sum]=take+nt;
    }
    
    int change(int sum, vector<int>& coins) {
        int N=coins.size();
        vector<vector<int>>dp(N+1,vector< int>(sum+1,-1));
        return helper(0,coins,N,sum,dp);
    }
};