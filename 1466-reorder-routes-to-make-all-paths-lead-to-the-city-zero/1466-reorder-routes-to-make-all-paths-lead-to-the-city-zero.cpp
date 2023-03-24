// https://www.youtube.com/watch?v=9HqTe9akgNk

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,bool>>>adj(n);//bool= true if incoming, false if outgoing edge
        for(auto i:connections)
        {
            adj[i[0]].push_back({i[1],false});
            adj[i[1]].push_back({i[0],true});
        }
        
        vector<bool>vis(n);
        int ans=0;
        queue<int>q;
        q.push(0);
        vis[0]=true;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(auto i:adj[temp])
            {
                if(vis[i.first]==false)
                {   
                    if(i.second==false)ans++;
                    vis[i.first]=true;
                    q.push(i.first);
                }
            }
        }
        
        return ans;
    }
};