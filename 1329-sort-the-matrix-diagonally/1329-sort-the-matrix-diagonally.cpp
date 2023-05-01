// https://www.youtube.com/watch?v=qDPHQOQsX3s&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=2

/*

approcah- Use difference between row and column of each cell diagonally as key and store the value in map of int and priority queue

to understand: just find the row and col diff of all cells in all diagonals

*/

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
               mat[i][j]=mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
    }
};