// https://www.youtube.com/watch?v=9BqVjYVLSMU

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        unordered_map<int,int>mp;
        int ans=1;
        for(auto i:arr)
        {
            if(mp.find(i-d)!=mp.end())mp[i]=mp[i-d]+1;
            else mp[i]=1;
            
            ans=max(ans,mp[i]);
        }
        return ans;
    }
};