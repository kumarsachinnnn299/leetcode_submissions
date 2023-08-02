//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=IDenkrdrztM
//BFS ka use krke krna h with queue

class Solution {
  public:
    
 
  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
           int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
        
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{0,0}});
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int dist=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            if(x==X&&y==Y)return dist;
            for(int i=0;i<4;i++)
            {
                int tx=x+dx[i];
                int ty=y+dy[i];
                
                if(tx>=0&&tx<N&&ty>=0&&ty<M&&A[tx][ty]==1)
                {    A[tx][ty]=0;
                    q.push({dist+1,{tx,ty}});
                }
            }
        }
        return -1;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends