class Solution {
public:
    
    // https://www.youtube.com/watch?v=wtRT9G42g4g
    int xm[4]={1,-1,0,0};
    int ym[4]={0,0,1,-1};
    
   
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
       queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    ans[i][j]=0;
                    
                }
            }
        }
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int x=temp.first;
            int y=temp.second;
            for(int i=0;i<4;i++)
            {
                int tx=x+xm[i];
                int ty=y+ym[i];
                if(tx>=0&&ty>=0&&tx<mat.size()&&ty<mat[0].size()&&ans[tx][ty]==-1)
                {
                    ans[tx][ty]=ans[x][y]+1;
                    q.push({tx,ty});
                }
            }
        }
        
        return ans;
    }
};