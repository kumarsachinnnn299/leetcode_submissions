//Constant space
// https://www.youtube.com/watch?v=3ylBTHCiihw&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=9

/*

use first row and column to store mark the row and col with value zero

with help of two variables keep recored if the zero row and col can be all zeros or not

*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool zerorow=false,zerocol=false;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0)zerorow=true;
                    if(j==0)zerocol=true;
                    
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][0]==0||matrix[0][j]==0)matrix[i][j]=0;
            }
        }
        if(zerorow)
        {
            for(int i=0;i<matrix[0].size();i++)matrix[0][i]=0;
        }
           if(zerocol)
        {
            for(int i=0;i<matrix.size();i++)matrix[i][0]=0;
        }
        
        
    }
};