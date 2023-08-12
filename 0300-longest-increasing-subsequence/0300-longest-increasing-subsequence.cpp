
// https://www.youtube.com/watch?v=mNrzyuus2h4&t=83s

class Solution {
public:
    
    int helper(int idx,vector<int>&nums,vector<int>&dp)
    {   
        if(dp[idx]!=-1)return dp[idx];
        int ans=1;
        for(int i=0;i<idx;i++)
        {   if(nums[idx]>nums[i])
            ans=max(ans,helper(i,nums,dp)+1);
        }
        return dp[idx]=ans;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        
        int ans=1;
        
        for(int i=0;i<nums.size();i++)
        {
            ans=max(ans,helper(i,nums,dp));
        }
        return ans;
        
    }
};