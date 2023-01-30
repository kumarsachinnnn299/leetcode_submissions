//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


// https://www.youtube.com/watch?v=Re_yBq5ZTAA
//Not fully understand

class Solution{
    vector<int>vis;
    int ans=0;
  public:
  
    bool dfs(vector<int>adj[],int node)
    {
        vis[node]=1;
        bool select=false;
        for(auto child:adj[node])
        {
            if(!vis[child]&&!dfs(adj,child))
            {
                select=true;
            }
        }
        if(select)ans++;
        return select;
    }
    
    int countVertex(int N, vector<vector<int>>edges){
        // code here
        vis.resize(N+1);
        vector<int>adj[N+1];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        dfs(adj,1);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends