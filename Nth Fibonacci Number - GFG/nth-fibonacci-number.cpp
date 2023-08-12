//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int m=1e9+7;
  
    int nthFibonacci(int n){
        // code here
        int n1=0,n2=1,ans;
        if(n==1)return 0;
        if(n==2)return 1;
        
        for(int i=3;i<=n+1;i++)
        {
             ans=(n1+n2)%m;
             n1=n2;
            n2=ans;
        }
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
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends