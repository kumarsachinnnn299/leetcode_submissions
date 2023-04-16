//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    long long factorial(long long n)
    {   long long ans=1;
       for(int i=1;i<=n;i++)
       {
        ans*=i;   
       }
       return ans;
    }

    long long nPr(int n, int r){
        // code here
        
        long long factn=factorial((long long)(n));
        long long factnr=factorial((long long)(n-r));
        return (factn/factnr);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends