class Solution {
public:
    
    void helper(int idx,vector<int>temp,vector<int>&nums,vector<vector<int>> &ans)
    {
        if(idx>=nums.size()){
            ans.push_back(temp);
            return;
        }
        
        helper(idx+1,temp,nums,ans);
        temp.push_back(nums[idx]);
        helper(idx+1,temp,nums,ans);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0,temp,nums,ans);
        return ans;
    }
};