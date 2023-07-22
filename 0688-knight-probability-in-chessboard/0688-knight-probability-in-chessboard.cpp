// https://www.youtube.com/watch?v=LAdtc498Q_I

double helper(int r,int c,int n,int k,vector<vector<vector<double>>>&dp)
{
    if(r>=n||c>=n||r<0||c<0)return 0;
    if(k==0)return 1;
    if(dp[r][c][k]!=-1)return dp[r][c][k];
    double ans=0;
    int xmoves[]={-2,-2,2,2,-1,1,-1,1};
    int ymoves[]={-1,1,-1,1,-2,-2,2,2};
    for(int i=0;i<8;i++)
    {
        int tx=r+xmoves[i];
        int ty=c+ymoves[i];
        ans+=helper(tx,ty,n,k-1,dp);
    }
    return dp[r][c][k]=(ans/8);
    
}

class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(n,vector<vector<double>>(n,vector<double>(k+1,-1)));
        return helper(row,column,n,k,dp);
    }
};