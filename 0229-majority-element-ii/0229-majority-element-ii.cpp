class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        while(j<nums.size())
        {
            while(j<nums.size()&&nums[j]==nums[i])j++;
            if(j-i>(nums.size()/3))ans.push_back(nums[i]);
            i=j;
        }
        return ans;
    }
};