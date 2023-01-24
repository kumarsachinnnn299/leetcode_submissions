//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// Not understood completely
// https://www.youtube.com/watch?v=RIb93qEdcKY
class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.size();
        int half=n/2;
        int reduce=0;
        while(half>=1)
        {
            string s1=s.substr(0,half);
            string s2=s.substr(half,half);
            if(s1==s2)
            {
             reduce=half-1;
             break;
            }
            half--;
        }
        return n-reduce;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends