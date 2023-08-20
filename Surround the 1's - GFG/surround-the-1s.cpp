//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    
    int xm[8]={-1,-1,-1,0,1,1, 1, 0};
    int ym[8]={-1, 0, 1,1,1,0,-1,-1};
    
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int ans=0;
        int n=matrix.size(),m=matrix[0].size();
        // if(n<3||m<3)return 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   if(matrix[i][j]==1)
                {
                    int c=0;
                    for(int k=0;k<8;k++)
                    {   
                        int tx=i+xm[k];
                        int ty=j+ym[k];
                        if(tx>=0&&tx<n&&ty>=0&&ty<m&&matrix[tx][ty]==0)
                        {
                            c++;
                        }
                    }
                    if(c!=0&&c%2==0)ans++;
                    
                }
                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends