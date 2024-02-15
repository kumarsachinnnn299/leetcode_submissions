//Done

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=nums[0],ans=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(sum>nums[i])
            {
                ans=max(ans,sum+nums[i]);
            }
            sum+=nums[i];
        }
        return ans;
    }
};