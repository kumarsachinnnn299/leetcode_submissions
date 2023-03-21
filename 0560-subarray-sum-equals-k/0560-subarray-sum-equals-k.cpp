// https://www.youtube.com/watch?v=Ofl4KgFhLsM
//prefix sum se hi hoga

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum=0;
        int ans=0;
        map<long long,long long>mp;
        mp[0]=1;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())ans+=mp[sum-k];
            mp[sum]++;
        }
        
        return ans;
    }
};