// https://www.youtube.com/watch?v=dk5FLiiLcQA

class Solution {
public:
    
    int bfs(vector<vector<int>>&adj,int node,vector<int>&vis)
    {   vis[node]=1;
        int c=1;
        for(auto i:adj[node]){
            if(!vis[i])
            {
               c+=bfs(adj,i,vis);
            }
        }
     return c;
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>vis(n);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        long long ans=0,temp=0;;
        vector<int>components;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int x=bfs(adj,i,vis);
                components.push_back(x);
            }
        }
        
        for(auto i:components)
        {
            temp+=i;
            ans+=(n-temp)*i;
        }
        return ans;
        
        
    }
};