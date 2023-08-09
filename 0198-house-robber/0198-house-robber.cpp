////Subsets wale question ki type ka h

//rohan ne hint di
//khud kiya

//Done again during fraz recursion playlist

int helper(int idx,vector<int>&nums,vector<int>&dp)
{
    if(idx>=nums.size())return 0;
    if(dp[idx]!=-1)return dp[idx];
    int taken=nums[idx]+helper(idx+2,nums,dp);
    int nt=helper(idx+1,nums,dp);
    return dp[idx]=max(taken,nt);
}

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(0,nums,dp);
        
    }
};