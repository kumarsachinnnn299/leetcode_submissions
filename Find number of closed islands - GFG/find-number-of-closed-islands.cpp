//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
// https://www.youtube.com/watch?v=PV_icw_6pSc
class Solution {
    public:
    
    void help(vector<vector<int>>& matrix,int i,int j)
    {
        if(i<0||j<0||i>=matrix.size()||j>=matrix[0].size()||matrix[i][j]==0)return;
        matrix[i][j]=0;
        help(matrix,i-1,j);
        help(matrix,i,j+1);
        help(matrix,i+1,j);
        help(matrix,i,j-1);
    }
    
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int ans=0;
        //removing edge island
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {   if(matrix[i][j]==1&&(i==0||j==0||i==N-1||j==M-1))
               { help(matrix,i,j);}
            }
        }
        
          for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {   if(matrix[i][j]==1)
               { help(matrix,i,j);
                   ans++;
               }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends