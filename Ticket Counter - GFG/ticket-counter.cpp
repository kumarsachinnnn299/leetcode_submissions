//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Thoda confusing
// https://www.youtube.com/watch?v=MCiQQP7y1JU
class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int s=1,e=N;
        bool flag=true;
        while(s<=e)
        {
            if(flag)s+=K;
            else e-=K;
            flag=!flag;
        }
        if(flag)return s;
        return e;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends