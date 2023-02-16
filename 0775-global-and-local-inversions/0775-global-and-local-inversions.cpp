// https://www.youtube.com/watch?v=1QlP6cVLrII

class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i]-i)>1)return false;
        }
        return true;
    }
};