// https://www.youtube.com/watch?v=ubg1qh_4r3E
//simple bfs question

class Solution {
public:
    
    int bfs(vector<vector<int>>& bombs,int source)
    {
        int count=1;
        int n=bombs.size();
        queue<pair<int,pair<int,int>>>q;
        int sx=bombs[source][0],sy=bombs[source][1],sr=bombs[source][2];
        vector<int>vis(n);
        q.push({sr,{sx,sy}});
        vis[source]=1;
        while(!q.empty())
        {
            long long int dx=q.front().second.first,dy=q.front().second.second,dr=q.front().first;
            q.pop();
            
           for(int i=0;i<n;i++)
        {   
               
            if(!vis[i])
            {
              
                long long int tx=bombs[i][0],ty=bombs[i][1];
                long long int xdif=abs(tx-dx),ydif=abs(ty-dy);
                // long long d=pow((tx-dx),2)+pow((ty-dy),2);
                if((xdif*xdif+ydif*ydif)<=(dr*dr))
                {   count++;
                    vis[i]=true;
                    q.push({bombs[i][2],{bombs[i][0],bombs[i][1]}});
                }
            }
        } 
        }
        return count;
        
    }
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        
        int ans=0;
        int n=bombs.size();
        for(int i=0;i<n;i++)
        {
            ans=max(ans,bfs(bombs,i));
        }
        return ans;
        
    }
};