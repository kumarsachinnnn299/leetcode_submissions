//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Khud kiya

class Solution {
public:
    int xm[4]={0,0,-1,1};
    int ym[4]={-1,1,0,0};
    bool helper(int idx, int r, int c,vector<vector<char>>& board,string word,vector<vector<int>>& vis)
    {
        
        if(idx>=word.size())return true;
        if(r<0||c<0||r>=board.size()||c>=board[0].size())return false;
        if(vis[r][c]||board[r][c]!=word[idx])return false;
        vis[r][c]=true;
        
        for(int i=0;i<4;i++)
        {
            int x=r+xm[i];
            int y=c+ym[i];
            if(helper(idx+1,x,y,board,word,vis))return true;
        }
        return false;
        
    }
    
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size()));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    if(helper(0,i,j,board,word,vis))return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends