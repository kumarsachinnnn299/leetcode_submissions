class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        map<int,vector<int>,greater<int>>mp2;
        for(auto i:nums)
        {
            mp[i]++;
        }
        
        vector<int>ans;
        for(auto i:mp)
        {
           mp2[i.second].push_back(i.first);
        }
        for(auto i:mp2)
        {
            for(auto j:i.second)
            {
                ans.push_back(j);
                k--;
                if(k==0)return ans;
            }
        }
        return ans;
    }
};