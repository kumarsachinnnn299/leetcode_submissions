// https://www.youtube.com/watch?v=EKOniHmaX9s
//Simple dp

class Solution {
public:
    
    bool helper(int idx,vector<int>&nums,vector<int>&dp)
    {
        if(idx==nums.size())return true;
        if(dp[idx]!=-1)return dp[idx];
        bool ans=false;
        
        if(idx+1<nums.size()&&nums[idx]==nums[idx+1])
        {
            ans=helper(idx+2,nums,dp);
            if(idx+2<nums.size()&&nums[idx]==nums[idx+2])
            {
                ans|=helper(idx+3,nums,dp);
            }
        }
        
        if(idx+2<nums.size()&&nums[idx]==nums[idx+1]-1&&nums[idx]==nums[idx+2]-2)
        {
            ans|=helper(idx+3,nums,dp);
        }
        return dp[idx]=ans;
        
        
    }
    
    bool validPartition(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
            return helper(0,nums,dp);
    }
};