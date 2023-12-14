class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        unordered_map<int,pair<int,int>>rc,cc;
        for(int i=0;i<grid.size();i++)
        {   int o=0,z=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)z++;
                else o++;
            }
         
            rc[i]={o,z};
        }
        for(int i=0;i<grid[0].size();i++)
        {   int o=0,z=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)z++;
                else o++;
            }
         
            cc[i]={o,z};
        }
        
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int onerow=rc[i].first;
                 int onecol=cc[j].first;
                 int zerorow=rc[i].second;
                 int zerocol=cc[j].second;
                ans[i][j]=onerow+onecol-zerorow-zerocol;
            }
        }
        return ans;
        
    }
};