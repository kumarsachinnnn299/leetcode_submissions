//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=dx0qjcFAx-c&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=4

/*

use three maps 1 for row , 1 for column and 1 for each 3x3 box

row and col are simple to maintain

for boxes use 3*(i/3)+(j/3)

*/

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        unordered_map<int,unordered_set<int>>mpr,mpc,mpb;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
               if(mat[i][j]) 
               {
                 if(mpr[i].find(mat[i][j])!=mpr[i].end())return 0;
               
                
                if(mpc[j].find(mat[i][j])!=mpc[j].end())return 0;
               
                
                int box=(3*(i/3))+(j/3);
                
                if(mpb[box].find(mat[i][j])!=mpb[box].end())return 0;
                 mpr[i].insert(mat[i][j]);
                  mpc[j].insert(mat[i][j]);
                mpb[box].insert(mat[i][j]);
                   
               }
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends