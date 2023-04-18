//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        bool flag=false;
        int c=0;
        for(int i=0;i<N;i++)
        {   
            if(S[i]=='0')c++;
            else{
                
                if(flag&&c>2*X)return false;
                else if(!flag&&c>X)return false;
                c=0;
            }
            if(S[i]=='1')flag=true;
        }
        if(c>X)return false;
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends