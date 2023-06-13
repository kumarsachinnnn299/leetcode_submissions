class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int>mpr,mpc;
        for(auto i:grid)
        {string temp="";
            for(auto j:i)
            {
                temp+=to_string(j);
                  temp+='+';
            }
            mpr[temp]++;
        }
        for(int j=0;j<grid[0].size();j++)
        {   string temp="";
            for(int i=0;i<grid.size();i++)
            {
                temp+=to_string(grid[i][j]);
                temp+='+';
            }
         mpc[temp]++;
        }
        int ans=0;
        for(auto i:mpr)
        {
            if(mpc[i.first]){
                ans+=(i.second*mpc[i.first]);
            }
        }
        return ans;
    }
};