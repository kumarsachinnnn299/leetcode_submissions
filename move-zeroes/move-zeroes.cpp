class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int c=0,curr=0;
        for(auto i:nums)if(i==0)c++;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)nums[curr++]=nums[i];
        }
        for(int i=curr;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};