
// https://www.youtube.com/watch?v=2101sEZ3EmI
class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int fp) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto i:meetings)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vis(n),ans;
        pq.push({0,0});
        pq.push({0,fp});
        while(!pq.empty())
        {
            auto temp=pq.top();
            pq.pop();
            if(vis[temp.second])continue;
            vis[temp.second]=1;
            for(auto i:adj[temp.second])
            {
                if(vis[i.first]==0)
                {
                    if(i.second>=temp.first)
                    {
                        pq.push({i.second,i.first});
                    }
                }
            }
                
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i])ans.push_back(i);
        }
        return ans;
        
            
    }
};