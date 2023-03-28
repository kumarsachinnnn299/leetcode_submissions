// https://www.youtube.com/watch?v=Ofl4KgFhLsM
//prefix sum se hi hoga

class Solution {
public:
    int subarraySum(vector<int>& nums, long long k) {
       int ans=0;
        unordered_map<long long,long long>mp;
        // mp[0]++;
        long long cursum=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            if(cursum==k)ans++;
            if(mp.find(cursum-k)!=mp.end())ans+=mp[cursum-k];
            mp[cursum]++;
        }
        return ans;
    }
};