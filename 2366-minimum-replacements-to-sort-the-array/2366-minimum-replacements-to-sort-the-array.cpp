
// https://www.youtube.com/watch?v=L0KJEHe5E68

class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0;
        int prev=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>prev)
            {
                int c=nums[i]/prev;
                if(nums[i]%prev)c++;
                prev=nums[i]/c;
                ans+=(c-1);
            }
            else{
                prev=nums[i];
            }
        }
        return ans;
    }
};