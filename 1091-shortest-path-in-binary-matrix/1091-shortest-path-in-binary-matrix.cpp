class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
    queue<pair<int,int>>q;
    if(grid[0][0])return -1;
    q.push({0,0});
    grid[0][0]=1;
    int res=0;
    int n=grid.size();
    int m=grid[0].size();
    while(!q.empty()){
        int s=q.size();
        res++;
        while(s--){
            auto coord=q.front();
            q.pop();
            int x=coord.first;
            int y=coord.second;
            if(x==n-1&&y==m-1)return res;
            for(int i=0;i<8;i++){
                int nx=x+dir[i][0];
                int ny=y+dir[i][1];
                if(nx<0||nx>=n||ny<0||ny>=m||grid[nx][ny])continue;
                if(!grid[nx][ny]){
                    grid[nx][ny]=1;
                    q.push({nx,ny});

                }
            }
        }
    }
    return -1;
    }
};