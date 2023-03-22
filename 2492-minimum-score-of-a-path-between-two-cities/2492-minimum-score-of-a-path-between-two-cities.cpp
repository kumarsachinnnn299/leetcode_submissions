
// https://www.youtube.com/watch?v=rPhMZsnnRsA
//BFS ka question
//adjacency list bnakar kro

class Solution {
public:
    vector<bool>vis;
    void dfs(int &ans,int node, vector<vector<pair<int,int>>>&arr)
    {
        if(vis[node])return;
        vis[node]=true;
        
        for(auto & [f,s]:arr[node])
        {
            ans=min(ans,s);
            dfs(ans,f,arr);
        }
    }
        
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>arr(n+1);
        vis.resize(n+1);
        int ans=INT_MAX;
        for(auto i:roads)
        {   
            arr[i[0]].push_back({i[1],i[2]});
            arr[i[1]].push_back({i[0],i[2]});
        }
        dfs(ans,1,arr);
        return ans;
    }
};