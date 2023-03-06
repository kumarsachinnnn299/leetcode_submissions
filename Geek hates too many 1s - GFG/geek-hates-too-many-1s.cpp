//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=bHs4YBG-3aQ

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        int c=0;
        for(int i=31;i>=0;i--)
        {
            int temp=(1<<i);
            if(n&temp)c++;
            else c=0;
            if(c==3)
            {
                n=n&(~temp);
                c=0;
            }
        }
        return n;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends