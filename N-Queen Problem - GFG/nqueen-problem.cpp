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
    
    void helper(int r,vector<vector<int>>&vis,vector<int>&temp,int n,vector<vector<int>>&ans,vector<int>&col,vector<int>&tl,vector<int>&tr)
    {
        if(r==n)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int c=0;c<n;c++)
        {
              if(col[c]==0&&tl[r-c+n-1]==0&&tr[r+c]==0)
        {
            vis[r][c]=1;
            col[c]=1;
            tl[r-c+n-1]=1;
            tr[r+c]=1;
            
            temp.push_back(c+1);
            helper(r+1,vis,temp,n,ans,col,tl,tr);
            vis[r][c]=0;
            temp.pop_back();
            col[c]=0;
            tl[r-c+n-1]=0;
            tr[r+c]=0;
        }
        }
        
      
        
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>vis(n,vector<int>(n)),ans;
        vector<int>temp,col(n),tl(2*n),tr(2*n);//tl->topleft, tr->topright
        
        helper(0,vis,temp,n,ans,col,tl,tr);
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