//Not done due to st
class Solution {
public:
   bool isvalid(int x,int y,int n)
   {
       if(x<0 || y<0 || x>=n || y>=n)
       return false;

       return true;
   }
   void BFS(int i,int j,vector<vector<int>> &mat)
   {
       int n = mat.size();

       queue<pair<int,int>> q;
       q.push({i,j});
       mat[i][j] = -1;
       
       int X[] = {+1,-1,0,0};
       int Y[] = {0,0,+1,-1};

       while(!q.empty())
       {
           int x = q.front().first;
           int y = q.front().second;
           q.pop();

           for(int i = 0;i<4;i++)
           {
               int nx =  x+X[i];
               int ny = y+Y[i];

               if(isvalid(nx,ny,n) && mat[nx][ny]==1)
               {
                   q.push({nx,ny});
                   mat[nx][ny] = -1;
               }
           }
       }
   }

   int solve(vector<vector<int>>& mat)
   {
       int n = mat.size();
       queue<vector<int>> q;
       for(int i = 0;i<n;i++)
       {
           for(int j = 0;j<n;j++)
           {
               if(mat[i][j]==-1)
               q.push({i,j,0});
           }
       }

       int X[] = {+1,-1,0,0};
       int Y[] = {0,0,+1,-1};

       while(!q.empty())
       {
           int x = q.front()[0];
           int y = q.front()[1];
           int val = q.front()[2];
           q.pop();


           if(mat[x][y]==1)
           return val;

           for(int i = 0;i<4;i++)
           {
              int nx = x+X[i];
              int ny = y+Y[i];

              if(isvalid(nx,ny,n))
              {
                  if(mat[nx][ny]==0)
                  {
                   q.push({nx,ny,val+1});
                   mat[nx][ny] = -1;   
                  }
                  else if(mat[nx][ny]==1)
                  q.push({nx,ny,val+1});    
              }
           }
       }

       return -1;

   }
    int shortestBridge(vector<vector<int>>& mat) {

        int n = mat.size();
        bool f = false;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                  BFS(i,j,mat);
                  f = true;
                  break; 
                }   
            }
            if(f)
            break;
        }
        return solve(mat)-1;

        
    }
};