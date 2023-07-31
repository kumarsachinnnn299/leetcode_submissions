//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    

    
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>ans,vis(v);
        queue<int>q;
        q.push(0);
        // vis[0]=1
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {   int temp=q.front();
                q.pop();
                if(vis[temp]==0)
                {
                    ans.push_back(temp);
                    vis[temp]=1;
                    for(auto j:adj[temp])if(vis[j]==0)q.push(j);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends