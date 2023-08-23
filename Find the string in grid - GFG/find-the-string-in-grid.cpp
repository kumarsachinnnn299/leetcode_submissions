//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    int xm[8]={-1,-1,-1,0,1,1,1,0};
    int ym[8]={-1,0,1,1,1,0,-1,-1};
    
    bool helper(int x,int y,int wordidx,int mov,vector<vector<char>>&grid,string& word)
    {
        if(wordidx==word.size())return true;
        if(x>=grid.size()||x<0||y>=grid[0].size()||y<0)return false;
        if(grid[x][y]!=word[wordidx])return false;
        x+=xm[mov];
        y+=ym[mov];
        return helper(x,y,wordidx+1,mov,grid,word);
        
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
        vector<vector<int>>ans;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==word[0])
                {
                    for(int k=0;k<8;k++)
                    {
                        int tx=i+xm[k];
                        int ty=j+ym[k];
                        if(helper(tx,ty,1,k,grid,word))
                        {
                            ans.push_back({i,j});
                            break;
                        }
                    }
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends