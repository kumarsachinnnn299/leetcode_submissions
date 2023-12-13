class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       map<int,pair<int,int>>rc,cc;
        for(int i=0;i<mat.size();i++)
        {   int o=0,z=0;
            for(int j=0;j<mat[0].size();j++)
            {
             if(mat[i][j]==0)z++;
                else o++;
            }
         rc[i]={o,z};
        }
         for(int i=0;i<mat[0].size();i++)
        {   int o=0,z=0;
            for(int j=0;j<mat.size();j++)
            {
             if(mat[j][i]==0)z++;
                else o++;
            }
         cc[i]={o,z};
        }
        
        int ans=0;
         for(int i=0;i<mat.size();i++)
        {   
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1&&rc[i].first==1&&cc[j].first==1)ans++;
               
            }
         
        }
        return ans;
    }   
};