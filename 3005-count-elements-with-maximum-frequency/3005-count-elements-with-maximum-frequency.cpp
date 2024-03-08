class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int cmax=0;
        for(auto i:mp)
        {
            cmax=max(i.second,cmax);
        }
        
        int ans=0;
        for(auto i:mp)
        {
            if(i.second==cmax)ans+=(i.second);
        }
        return ans;
        
    }
};