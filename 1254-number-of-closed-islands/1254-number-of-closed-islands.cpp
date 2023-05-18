class Solution {
public:
    
     void help(vector<vector<int>>& matrix,int i,int j)
    {
        if(i<0||j<0||i>=matrix.size()||j>=matrix[0].size()||matrix[i][j]==1)return;
        matrix[i][j]=1;
        help(matrix,i-1,j);
        help(matrix,i,j+1);
        help(matrix,i+1,j);
        help(matrix,i,j-1);
    }
    
    
    int closedIsland(vector<vector<int>>& matrix) {
       int N=matrix.size(),M=matrix[0].size(),ans=0;
        
          for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {   if(matrix[i][j]==0&&(i==0||j==0||i==N-1||j==M-1))
               { help(matrix,i,j);}
            }
        }
        
         for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {   if(matrix[i][j]==0)
               { help(matrix,i,j);
                   ans++;
               }
            }
        }
        return ans;
    }
};