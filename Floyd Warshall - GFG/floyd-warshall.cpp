//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&temp){
	    int N=temp.size();
	    // Code here
	    for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                for(int k=0;k<N;k++)
                {   if(temp[j][k]==-1&&temp[j][i]!=-1&&temp[i][k]!=-1)temp[j][k]=temp[j][i]+temp[i][k];
                    else if(temp[j][k]>(temp[j][i]+temp[i][k])&&temp[j][i]!=-1&&temp[i][k]!=-1)temp[j][k]=temp[j][i]+temp[i][k];
                    
                }
            }
        }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends