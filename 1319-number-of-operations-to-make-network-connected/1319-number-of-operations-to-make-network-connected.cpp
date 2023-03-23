// https://youtu.be/3JIwIRir2sM
// https://leetcode.com/problems/number-of-operations-to-make-network-connected/discuss/3330357/C%2B%2B-Easy-solution-DFS

class Solution {
public:
    
    void dfs(vector<vector<int>>&adj,vector<bool>&vis,int node)
    {
        vis[node]=true;
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
               dfs(adj,vis,i);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;//minimum n-1 edges to honi chahiye in  mst to connect n nodes
        vector<vector<int>>adj(n);
        vector<bool>vis(n);
        int ans=0;
        
        for(auto i:connections)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                
                dfs(adj,vis,i);
                ans++;
            }
        }
        return ans-1;
        
    }
};