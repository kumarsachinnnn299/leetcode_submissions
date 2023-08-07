// https://www.youtube.com/watch?v=u40eYbmT9zg
//Agar ek branch m ek element ignore kiya h to wo future m bhi nhi lena kabhi

class Solution {
public:
    
    void helper(int idx, vector<int>&nums,vector<vector<int>>&ans,vector<int>temp)
    {
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        int tidx=idx;
        while(tidx<nums.size()&&nums[tidx]==nums[idx])tidx++;
        helper(tidx,nums,ans,temp);
        temp.push_back(nums[idx]);
        helper(idx+1,nums,ans,temp);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0,nums,ans,temp);
        return ans;
    }
};