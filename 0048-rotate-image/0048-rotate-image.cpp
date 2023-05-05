//transpose and reverse each row
//half triangle hi traverse kre either upper or lower
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     for(int i=0;i<matrix.size();i++)
     {
         for(int j=i;j<matrix[0].size();j++)//upper trianlge
         {
             swap(matrix[i][j],matrix[j][i]);
         }
     }
        for(int i=0;i<matrix.size();i++)
        {
            
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};