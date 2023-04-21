class Solution {
public:
    int helper(vector<int>& nums,vector<int>& dp,int idx)
    {
        if(idx>=nums.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        
        int taken=nums[idx]+helper(nums,dp,idx+2);
        int nottaken=helper(nums,dp,idx+1);
        
        return dp[idx]=max(taken,nottaken);
        
        
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int temp=helper(nums,dp,0);
        return temp;
    }
};