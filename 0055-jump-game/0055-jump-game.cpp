class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dest=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]+i>=dest)
            {
                dest=i;
            }
            
        }
        return dest==0;
    }
};