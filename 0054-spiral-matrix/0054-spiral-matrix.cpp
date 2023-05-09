// https://www.youtube.com/watch?v=CywIodsJI7w&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=10

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r1=0,r2=matrix.size(),c1=0,c2=matrix[0].size();
        while(r1<r2&&c1<c2)
        {
            for(int i=c1;i<c2;i++)
            {
                ans.push_back(matrix[r1][i]);
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                ans.push_back(matrix[i][c2-1]);
            }
            c2--;
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    ans.push_back(matrix[r2-1][i]);
                }
                r2--;
               
            }
             if(c2>c1)
                {
                    for(int i=r2-1;i>=r1;i--)
                    {
                        ans.push_back(matrix[i][c1]);
                    }
                 c1++;
                }
        }
        return ans;
    }
};