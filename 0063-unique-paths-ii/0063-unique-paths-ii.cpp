//Done
//Easy
//Same question ek or h Robot ka

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        if(grid[n-1][m-1]==1)return 0;
        for(int i=0;i<n;i++){
            if(grid[i][0])break;
            vis[i][0]=1;}
        for(int i=0;i<m;i++){
            if(grid[0][i])break;
            vis[0][i]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    vis[i][j]+=(vis[i-1][j]+vis[i][j-1]);
                }
            }
        }
        return vis[n-1][m-1];
    }
};