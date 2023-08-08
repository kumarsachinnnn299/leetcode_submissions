class Solution {
public:
    
    void helper(int idx,vector<int>&nums,int sum,vector<int>temp,vector<vector<int>>&ans,int &target)
    {
        if(idx==nums.size()||sum>target)return;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        helper(idx+1,nums,sum,temp,ans,target);
        temp.push_back(nums[idx]);
        sum+=nums[idx];
        helper(idx,nums,sum,temp,ans,target);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int s=0;
        helper(0,candidates,s,temp,ans,target);
        return ans;
    }
};