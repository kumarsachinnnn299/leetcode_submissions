// https://www.youtube.com/watch?v=yTflID2AMm8

class Solution {
public:
    
    int ans=1;
    vector<int>dist=vector<int>(100005);//vector<int>dist(100005) not working
    
    void dfs(int src,string& s,vector<vector<int>>&adj)
    {
        dist[src]=1;
        for(auto node:adj[src])
        {
            dfs(node,s,adj);
            if(s[src]!=s[node])
            {
                ans=max(ans,dist[src]+dist[node]);
                dist[src]=max(dist[src],dist[node]+1);
            }
        }
    }
    
    int longestPath(vector<int>& parent, string s) {
        vector<vector<int>>adjlist(parent.size());
        for(int i=1;i<parent.size();i++)
        {
            adjlist[parent[i]].push_back(i);
        }
        dfs(0,s,adjlist);
        return ans;
        
    }
};