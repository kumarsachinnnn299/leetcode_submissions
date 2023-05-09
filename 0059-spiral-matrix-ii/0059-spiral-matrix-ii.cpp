class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
         int r1=0,r2=n,c1=0,c2=n;
        int c=1;
        while(r1<r2&&c1<c2)
        {
            for(int i=c1;i<c2;i++)
            {
                matrix[r1][i]=c++;
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                matrix[i][c2-1]=c++;
            }
            c2--;
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    matrix[r2-1][i]=c++;
                }
                r2--;
               
            }
             if(c2>c1)
                {
                    for(int i=r2-1;i>=r1;i--)
                    {
                        matrix[i][c1]=c++;
                    }
                 c1++;
                }
        }
        return matrix;
        
    }
};