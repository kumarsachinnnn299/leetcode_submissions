//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

//Fraz recursion playlist
//Brute force recursion
// https://www.youtube.com/watch?v=VrySrTVAI3Y&list=PLjkkQ3iH4jy82KRn9jXeFyWzvX7sqYrjE&index=26

class Solution{
public:
    int rf[10],cf[10],df[10];
    
    bool issafe(int r,int c,vector<vector<int>>&vis)
    {
       //up
       int i=r,j=c;
       while(i>=0){
           if(vis[i][c])return false;
           i--;
       }
       i=r;
       //topright
       while(j<vis[0].size()&&i>=0)
       {
           if(vis[i][j])return false;
           j++;
           i--;
       }
       i=r;
       j=c;
       
  
    
    while(i>=0&&j>=0)
    {
         if(vis[i][j])return false;
           i--;
           j--;
    }
    return true;
    
       
    }
    
    void helper(int r,vector<vector<int>>&vis,vector<int>&temp,int n,vector<vector<int>>&ans)
    {
        if(r==n)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int c=0;c<n;c++)
        {
              if(issafe(r,c,vis))
        {
            vis[r][c]=1;
            temp.push_back(c+1);
            helper(r+1,vis,temp,n,ans);
            vis[r][c]=0;
            temp.pop_back();
        }
        }
        
      
        
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>vis(n,vector<int>(n)),ans;
        vector<int>temp;
        memset(rf,0,sizeof(rf));
        memset(cf,0,sizeof(cf));
        memset(df,0,sizeof(df));
        
        helper(0,vis,temp,n,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends