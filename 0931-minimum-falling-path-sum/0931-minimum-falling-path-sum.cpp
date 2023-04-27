class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size()));
        dp[0][0]=grid[0][0];
         for(int i=1;i<grid[0].size();i++)
        {
           
             dp[0][i]=grid[0][i];
        }
        
        for(int i=1;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {   
                if(j==0)
                {
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j==grid[0].size()-1)
                {
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                }
                else{
                    dp[i][j]=grid[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<grid[0].size();i++)
        {
            ans=min(ans,dp[grid.size()-1][i]);
        }
        for(auto i: dp)
        {
            for(auto j: i)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};