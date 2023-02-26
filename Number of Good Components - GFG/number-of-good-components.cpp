//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Not completely understood
// https://www.youtube.com/watch?v=U2pzhkuqacM

class Solution {
  public:
  
    bool bfs(int node,vector<bool>&visited,vector<vector<int>>& adj )
    {
        queue<int>q;
        q.push(node);
        visited[node]=true;
        int nodes=0;
        int edges=adj[node].size();
        bool flag=true;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            nodes++;
            if(adj[temp].size()!=edges)flag=false;
            for(auto i:adj[temp])
            {
                if(visited[i]!=true){
                    visited[i]=true;
                    q.push(i);
                    
                }
            }
        }
        return flag&&nodes==edges+1;
    }
  
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        vector<bool>visited(V+1);
        int ans=0;
        for(int i=1;i<=V;i++)
        {
            if(!visited[i])
            {
                if(bfs(i,visited,adj))ans++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends