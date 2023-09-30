//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        vector<int>rvis(1001),cvis(1001);
        vector<pair<int,int>>arr;
        for(int i=0;i<matrix.size();i++)
        {   
            for(int j=0;j<matrix[0].size();j++)
            {   
                if(matrix[i][j]==1)
                {
                    arr.push_back({i,j});
                }
            }
        }
        for(auto i:arr)
        {
            int x=i.first;
            int y=i.second;
            if(rvis[x]==0)
            {   rvis[x]=1;
                for(int i=0;i<matrix[0].size();i++ )matrix[x][i]=1;
            }
            if(cvis[y]==0)
            {
                cvis[y]=1;
                for(int i=0;i<matrix.size();i++)matrix[i][y]=1;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends