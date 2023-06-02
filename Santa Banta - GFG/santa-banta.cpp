//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=7DAqDWaiWWo

class Solution{
public:
    vector<int>kthprime;
    //Sieve of eratosthenes part
    void precompute(){
        vector<int>primes(1000001,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i<=1000000;i++)
        {
            if(primes[i])
            {
                kthprime.push_back(i);
                for(int j=2*i;j<=1000000;j+=i)
                {
                    primes[j]=0;
                }
            }
        }
    }
    
    void dfs(int node,vector<vector<int>> &g,vector<int> &vis,int &temp)
    {
        vis[node]=true;
        temp++;
        for(auto i:g[node])
        {
            if(vis[i]==false)
            {
                dfs(i,g,vis,temp);
            }
        }
    }
    
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        vector<int>vis(n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {   int temp=0;
                dfs(i,g,vis,temp);
                ans=max(ans,temp);
            }
        }
        if(ans==1)return -1;
    return kthprime[ans-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends