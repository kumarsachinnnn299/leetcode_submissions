//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
     int xm[4]={-1,1,0,0};
    int ym[4]={0,0,1,-1};
    
    void helper(int r,int c,int color,vector<vector<int>>&arr,int ic,vector<vector<int>>&vis)
    {
        if(r>=arr.size()||c>=arr[0].size()||r<0||c<0)return;
        if(arr[r][c]!=ic||vis[r][c])return;
        arr[r][c]=color;
        vis[r][c]=1;
        for(int i=0;i<4;i++)
        {   
            int x=r+xm[i];
            int y=c+ym[i];
             
                 helper(x,y,color,arr,ic,vis);
            
           
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        // Code here 
         vector<vector<int>>vis(arr.size(),vector<int>(arr[0].size()));
        int ic=arr[sr][sc];
        helper(sr,sc,color,arr,ic,vis);
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends