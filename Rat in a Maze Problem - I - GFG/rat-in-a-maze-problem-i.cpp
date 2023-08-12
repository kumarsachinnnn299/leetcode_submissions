//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    int xm[4]={-1,1,0,0};
    int ym[4]={0,0,1,-1};
    char moves[4]={'U','D','R','L'};
    
    void helper(int r,int c,vector<vector<int>>&m,vector<string>&ans,int n,string &temp,vector<vector<int>>vis)
    {
        if(r>=n||r<0||c>=n||c<0||m[r][c]==0||vis[r][c])return ;
        if(r==n-1&&c==n-1){
            ans.push_back(temp);
            return;
        }
        vis[r][c]=1;
        // if(vis[r][c]!=-1)return vis[r][c];
        // int ans=0;
        for(int i=0;i<4;i++)
        {
            int tx=r+xm[i];
            int ty=c+ym[i];
            string temp2=temp;
            temp2+=moves[i];
            helper(tx,ty,m,ans,n,temp2,vis);
        }
       
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if(m[0][0]==0||m[n-1][n-1]==0)return {"-1"};
        vector<vector<int>>vis(n,vector<int>(n));
        vector<string>ans;
        string temp="";
         helper(0,0,m,ans,n,temp,vis);
         return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends