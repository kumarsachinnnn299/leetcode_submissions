//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=GCpWThzWz8s

class Solution {
  public:
    int minVal(int a, int b) {
        
           int setbitsA=__builtin_popcount(a);
        int setbitsB=__builtin_popcount(b);
        if(setbitsA==setbitsB)return a;
        while(setbitsA>setbitsB)
        {
            a&=(a-1);
            setbitsA--;
        }
        while(setbitsB>setbitsA)
        {
            a=a|(a+1);
            setbitsB--;
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends