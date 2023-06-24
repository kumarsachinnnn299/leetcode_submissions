
// https://leetcode.com/problems/tallest-billboard/discuss/3675909/C%2B%2B-oror-Easy-DP-solution-with-explanation

class Solution {
public:
    
    int sum;
    
    int helper(int idx,int diff,  vector<vector<int>>&dp, vector<int>& rods)
    {
        if(idx>=rods.size())
        {
            if(diff==0)return 0;
            return INT_MIN;
        }
        if(dp[idx][sum+diff]!=-1)return dp[idx][diff+sum];
        int temp1=rods[idx]+helper(idx+1,diff+rods[idx],dp,rods);
        int temp2=helper(idx+1,diff,dp,rods); 
         int temp3=helper(idx+1,diff-rods[idx],dp,rods);   
        return dp[idx][diff+sum]=max({temp1,temp2,temp3});
    }
    
    
    int tallestBillboard(vector<int>& rods) {
        sum=accumulate(rods.begin(),rods.end(),0);
        vector<vector<int>>dp(rods.size(),vector<int>(2*sum+1,-1));
        return helper(0,0,dp,rods);
    }
};