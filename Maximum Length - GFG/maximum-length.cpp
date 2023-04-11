//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        vector<int>arr;
        arr.push_back(a);
         arr.push_back(b);
          arr.push_back(c);
          sort(arr.begin(),arr.end());
          int max1=arr[2];
          max1-=(arr[1]*2);
        //   if(max1<=2)return accumulate(arr.begin(),arr.end(),0);
          max1-=(arr[0]*2);
          if(max1<=2)return accumulate(arr.begin(),arr.end(),0);
          return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends