//Recursion playlist fraz
// https://www.youtube.com/watch?v=Q4M-MjUCHQ4

class Solution {
public:
    
     bool isvalid(int i,int j,vector<vector<char>>&grid,int val)
    {
        for(int k=0;k<9;k++)
        {
            if(grid[i][k]-'0'==val)return false;
            if(grid[k][j]-'0'==val)return false;
            if(grid[3*(i/3)+k/3][3*(j/3)+(k%3)]-'0'==val)return false;
        }
        return true;
    }
    
    bool helper(vector<vector<char>>&grid)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j]=='.')
                {
                    for(int val=1;val<=9;val++)
                    {
                        if(isvalid(i,j,grid,val))
                        {
                            grid[i][j]='0'+val;
                            if(helper(grid))return true;
                            else grid[i][j]='.';
                            
                        }
                    }
                return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
        
    }
};