// ??ND

class Solution {
public:
    bool dfs(vector<vector<int>> &time, vector<vector<bool>> &vis, int curtime, int i, int j){
        int m = time.size();
        int n = time[0].size();
        if(i<=0 || j<=0 || i>=m || j>=n || vis[i][j] || curtime>time[i][j]) return false;
        if(i==m-1) return true;
        vis[i][j]=true;
        int dx[] = {0,0,1,-1};
        int dy[] = {-1,1,0,0};

        for(int k=0; k<4; k++){
            int ni = i+dx[k];
            int nj = j+dy[k];
            if(dfs(time,vis,curtime,ni,nj)) return true;
        }

        return false;
    }

    bool isPossible(vector<vector<int>> &time, int curtime){
        int m = time.size();
        int n = time[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n,false));

        // each element in first row
        for(int j=1; j<n; j++){
            if(curtime>time[1][j]) continue;
            if(dfs(time,vis,curtime,1,j)) return true;
        }
        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>> time(row+1, vector<int>(col+1, INT_MAX));
        for(int t=0; t<cells.size(); t++){
            int x = cells[t][0];
            int y = cells[t][1];
            time[x][y]=t;
        }
        int totime = cells.size();
        int l=0, r=totime-1,ans;

        while(l<=r){
            int m = (l+r)/2;
            if(isPossible(time,m)){
                ans = m;
                l=m+1;
            }else r=m-1;
        }
        return ans;
    }
};