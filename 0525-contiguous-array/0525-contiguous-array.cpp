class Solution {
public:
    
    //Use concept max length subarray with sum 0
    
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])sum++;
            else sum--;
            if(mp.find(sum)!=mp.end())
            {
                int l=i-mp[sum];
               
                ans=max(ans,l);
            }
            else {
                mp[sum]=i;
            }
        }
        return ans;
    }
};