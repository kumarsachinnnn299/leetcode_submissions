class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r=img.size(),c=img[0].size();
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j= 0;j<c;j++)
            {
                
                int tr=i-1,tc=j-1,vc=0,sum=0;
                for(int k=tr;k<tr+3;k++)
                {
                 for(int l=tc;l<tc+3;l++)
                 {
                     if(k>=0&&k<r&&l>=0&&l<c)
                     {
                         sum+=img[k][l];
                         vc++;
                     }
                 }
                }
                ans[i][j]=sum/vc;
                
            }
        }
        return ans;
    }
};