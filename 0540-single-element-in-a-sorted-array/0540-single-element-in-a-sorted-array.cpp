class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1)return nums[0];
        while(s<=e)
        {
        if(nums[s]!=nums[s+1])return nums[s];
            if(nums[e]!=nums[e-1])return nums[e];
            s+=2;
            e-=2;
        }
        return 0;
    }
};