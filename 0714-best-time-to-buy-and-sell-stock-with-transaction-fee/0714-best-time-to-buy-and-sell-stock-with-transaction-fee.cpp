// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/discuss/3667348/Daily-LeetCoding-Challenge-June-Day-22

class Solution {
public:
    
    int helper(int idx,vector<int>& prices,int fee,int signal,vector<vector<int>>&dp)
    {
        if(idx>=prices.size())return 0;
        if(dp[idx][signal]!=-1)return dp[idx][signal];
        if(signal==0)
        {
            int temp1=-prices[idx]+helper(idx+1,prices,fee,1,dp);
            int temp2=helper(idx+1,prices,fee,0,dp);
            return dp[idx][signal]=max(temp1,temp2);
        }
        else{
             int temp1=prices[idx]-fee+helper(idx+1,prices,fee,0,dp);
            int temp2=helper(idx+1,prices,fee,1,dp);
            return dp[idx][signal]=max(temp1,temp2);
        }
        return 0;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return helper(0,prices,fee,0,dp);//index,prices, fee,signal, dp
        
    }
};