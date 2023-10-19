//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=smIiEJLCcB8
//Little hint

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<int>vis(V);
	    queue<int>q;
	    q.push(0);
	    int level=0;
	    
	    while(!q.empty())
	    {
	        int s=q.size();
	        
	        for(int i=0;i<s;i++)
	        {
	            int temp=q.front();
	            if(temp==X)return level;
	            q.pop();
	            vis[temp]=1;
	            for(auto i:adj[temp])
	            {
	                if(vis[i]==0)q.push(i);
	            }
	            
	        }
	        level++;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends