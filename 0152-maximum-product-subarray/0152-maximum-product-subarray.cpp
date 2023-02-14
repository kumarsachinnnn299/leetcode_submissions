
// https://www.youtube.com/watch?v=tHNsZHXnYd4

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxprod=ans,minprod=ans;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)swap(maxprod,minprod);
            maxprod=max(nums[i],nums[i]*maxprod);
            minprod=min(nums[i],nums[i]*minprod);
            ans=max(ans,maxprod);
        }
        return ans;
    }
};