class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r=matrix.size(),c=matrix[0].size();
        vector<int>arr1(r),arr2(c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    arr1[i]=1;
                    arr2[j]=1;
                }
            }
        }
        
          for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr1[i]||arr2[j])
                {
                   matrix[i][j]=0;
                }
            }
        }
        
    }
};