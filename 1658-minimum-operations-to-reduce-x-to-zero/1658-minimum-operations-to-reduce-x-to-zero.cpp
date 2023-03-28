// https://www.youtube.com/watch?v=MCfH3DYHklI

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,int>mp;
        int sum=0;
         mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mp[sum]=i;
        }
       
        int target=sum-x;
        if(target<0)return -1;
        sum=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   sum+=nums[i];
            if(mp.find(sum-target)!=mp.end())
            {
                ans=max(ans,i-mp[sum-target]);
            }
        }
        if(ans==INT_MIN)return -1;
        return nums.size()-ans;
    }
};