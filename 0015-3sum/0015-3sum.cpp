class Solution {
    vector<vector<int>>ans;
    
public:
    
    void helper(int s,int e,vector<int>&nums,int target)
    {
        int a=nums[s-1];
        while(s<e)
        {
            if(nums[s]+nums[e]>target)
            {
                e--;
            }
             else if(nums[s]+nums[e]<target)
            {
                s++;
            }
            else
            {
                ans.push_back({a,nums[s],nums[e]});
                while(s<e&&nums[s]==nums[s+1])s++;
                while(s<e&&nums[e]==nums[e-1])e--;
                s++;
                e--;
            }
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0||nums[i-1]!=nums[i])
            {
                helper(i+1,nums.size()-1,nums,0-nums[i]);
            }
        }
        return ans;
    }
};