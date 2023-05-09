//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Khud kiya

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        if(N==1)return 0;
        vector<int>maxl,minr(N-1);
        maxl.push_back(A[0]);
        minr[minr.size()-1]=A[N-1];
        for(int i=2;i<N;i++ )
        {
            if(A[i-1]>maxl[maxl.size()-1])maxl.push_back(A[i-1]);
            else maxl.push_back(maxl[maxl.size()-1]);
        }
        
        for(int i=N-3;i>=0;i--)
        {
            if(A[i+1]<minr[i+1])
            {
                minr[i]=A[i+1];
            }
            else minr[i]=minr[i+1];
        }
        
        
        int ans=0;
        for(int i=0;i<N-1;i++)
        {
            if(maxl[i]+minr[i]>=K)ans++;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends