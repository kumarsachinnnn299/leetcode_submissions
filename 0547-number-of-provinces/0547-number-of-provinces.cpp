// https://www.youtube.com/watch?v=xaxdyPZaQGI
//Basic DFS question

class Solution {
public:
    
    void dfs(int idx, vector<int>&vis,vector<vector<int>>& isConnected)
    {
        if(vis[idx])return;
        vis[idx]=1;
        for(int i=0;i<vis.size();i++)
        {
            if(isConnected[idx][i])
            {
                dfs(i,vis,isConnected);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ans=0;
        vector<int>vis(n);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                dfs(i,vis,isConnected);
            }
        }
        return ans;
    }
};