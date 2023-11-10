// https://www.youtube.com/watch?v=emF5eAYR3Nk

class Solution {
public:
    
    void dfs(unordered_map<int,vector<int>>&mp,set<int>&vis,int a,vector<int>&ans)
    {
        if(vis.find(a)!=vis.end())return;
        vis.insert(a);
        ans.push_back(a);
        for(auto i:mp[a])
        {
            dfs(mp,vis,i,ans);
        }
    }
    
    vector<int> restoreArray(vector<vector<int>>& arr) {
        unordered_map<int,vector<int>>mp;
        for(auto i:arr)
        {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        int head;
        for(auto i:mp)
        {
            if(i.second.size()==1)head=i.first;
        }
        set<int>vis;
        vector<int>ans;
        dfs(mp,vis,head,ans);
        return ans;
    }
};