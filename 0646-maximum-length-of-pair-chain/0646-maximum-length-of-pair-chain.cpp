//Type of LCS but here we can sort

class Solution {
public:
    
     int helper(int idx,vector<vector<int>>&nums,vector<int>&dp)
    {   
        if(dp[idx]!=-1)return dp[idx];
        int ans=1;
        for(int i=0;i<idx;i++)
        {   if(nums[idx][0]>nums[i][1])
            ans=max(ans,helper(i,nums,dp)+1);
        }
        return dp[idx]=ans;
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        vector<int>dp(pairs.size(),-1);
        
        int ans=1;
        
        for(int i=0;i<pairs.size();i++)
        {
            ans=max(ans,helper(i,pairs,dp));
        }
        return ans;
        
    }
};