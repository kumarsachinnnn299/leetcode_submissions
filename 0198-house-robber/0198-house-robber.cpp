class Solution {
public:
    
    int helper(int idx,vector<int>&nums,bool prevtaken,vector<vector<int>>&dp)
    {
        if(idx==nums.size())return 0;
        if(dp[idx][prevtaken]!=-1)return dp[idx][prevtaken];
        if(prevtaken)
        {
            return  dp[idx][prevtaken]=helper(idx+1,nums,!prevtaken,dp);
        }
        else{
            int t=0,nt=0;
            t=nums[idx]+helper(idx+1,nums,!prevtaken,dp);
            nt=helper(idx+1,nums,prevtaken,dp);
            return  dp[idx][prevtaken]= max(t,nt);
        }
    }
    
    int rob(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(2,-1));
        return helper(0,nums,false,dp);
    }
};