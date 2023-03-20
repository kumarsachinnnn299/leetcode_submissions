//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(N,vector<int>(M));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j]=='X')
                q.push({{i,j},0});
                vis[i][j]==1;
            }
        }
        
        vector<int>x_moves={-1,1,0,0};//for checking in all directions
        vector<int>y_moves={0,0,-1,1};
        
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            int x=i.first.first;
            int y=i.first.second;
            int moves=i.second;
            if(grid[x][y]=='Y')return moves;
            for(int i=0;i<4;i++)
            {
                int xn=x+x_moves[i];
                int yn=y+y_moves[i];
                if(xn>=0&&xn<N&&yn>=0&&yn<M&&vis[xn][yn]==0)
                {
                    q.push({{xn,yn},moves+1});
                    vis[xn][yn]=1;
                }
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends