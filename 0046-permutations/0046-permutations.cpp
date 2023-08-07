
// https://www.youtube.com/watch?v=jRyQVVvYBAM&list=PLjkkQ3iH4jy82KRn9jXeFyWzvX7sqYrjE&index=9
class Solution {
public:
    
    void helper(int idx,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0,nums,ans);
        return ans;
    }
};