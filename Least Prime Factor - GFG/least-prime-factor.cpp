//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Just sieve hi perform kro isme but n tak hi
//Good question
// https://www.youtube.com/watch?v=Q8V43wu-nug

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>ans(n+1);
        ans[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(ans[i]==0)
            {
                ans[i]=i;
                for(int j=i*2;j<=n;j+=i)
                {
                   if(ans[j]==0) ans[j]=i;
                }
            }
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
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends