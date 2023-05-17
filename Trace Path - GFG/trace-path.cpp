//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//Not done 

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
       int left=0,right=0,up=0,down=0,x=0,y=0;
        for(auto i:s)
        {
            if(i=='L')
            {
                y--;
            }
            else if(i=='R')y++;
            else if(i=='D')x--;
            else x++;
            left=min(left,y);
            right=max(right,y);
            up=max(up,x);
            down=min(down,x);
        
        }
        if((right-left+1)>m||(up-down+1)>n)return 0;
         return 1;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends