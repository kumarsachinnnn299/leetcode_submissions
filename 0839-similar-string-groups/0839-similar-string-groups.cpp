
// https://www.youtube.com/watch?v=HQy8kq1KfdI

class Solution {
public:
    
    vector<vector<int>>adj;
    vector<int>vis;
    
    bool similar(string s1,string s2)
    {
        int n=s1.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])c++;
            if(c>2)return false;
        }
        return true;
    }
    
    void dfs(int i)
    {
        vis[i]=1;
        for(auto j:adj[i])
        {
            if(vis[j]==0)
            {
                dfs(j);
            }
        }
    }
    
    
    int numSimilarGroups(vector<string>& strs) {
        int n=strs.size();
        adj.resize(n);
        vis.resize(n);
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(similar(strs[i],strs[j]))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                dfs(i);
            }
        }
        return ans;
        
        
        
    }
};