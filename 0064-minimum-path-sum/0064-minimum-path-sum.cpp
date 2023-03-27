// https://www.youtube.com/watch?v=t1shZ8_s6jc
//not hard but good question for dp starting


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size()));
        for(int j=0;j<grid[0].size();j++)
        {
            if(j==0)dp[0][0]=grid[0][0];
            else{
                dp[0][j]=dp[0][j-1]+grid[0][j];
            }
        }
        for(int j=0;j<grid.size();j++)
        {
            if(j==0)dp[0][0]=grid[0][0];
            else{
                dp[j][0]=dp[j-1][0]+grid[j][0];
            }
        }
        

        
        for(int i=1;i<grid.size();i++)
        {
            for(int j=1;j<grid[0].size();j++)
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
    
        return dp[grid.size()-1][grid[0].size()-1];
    }
};