
//Recursion playlist by fraz

class Solution {
public:
    
    void helper(int idx,vector<int>temp,vector<int>&nums,int sum,vector<vector<int>>&ans,int target)
    {if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        if(idx>=nums.size()||sum>target)
        {
            return;
        }
        
        
        int tidx=idx;
        while(tidx<nums.size()&&nums[tidx]==nums[idx])tidx++;
        helper(tidx,temp,nums,sum,ans,target);
        
        sum+=nums[idx];
        temp.push_back(nums[idx]);
        helper(idx+1,temp,nums,sum,ans,target);
        sum-=nums[idx];
        temp.pop_back();
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int s=0;
        vector<vector<int>>ans;
        helper(0,temp,nums,s,ans,target);
        return ans;
    }
};