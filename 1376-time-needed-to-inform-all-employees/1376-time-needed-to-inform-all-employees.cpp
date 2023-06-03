//Simple bfs question
// https://www.youtube.com/watch?v=otmkpRqEZKg

class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans=informTime[headID];
        queue<int>q;
        vector<vector<int>>g(n);
        for(int i=0;i<manager.size();i++)
        {
            if(manager[i]!=-1)
            {
                g[manager[i]].push_back(i);
            }
        }
        q.push(headID);
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(int i=0;i<g[curr].size();i++)
            {
                int next=g[curr][i];
                informTime[next]+=informTime[curr];
                ans=max(ans,informTime[next]);
                q.push(next);
            }
        }
        return ans;
            
        
    }
};