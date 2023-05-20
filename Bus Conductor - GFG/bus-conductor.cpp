//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMoves(int n, vector<int> arr1, vector<int> arr2) {
        
        int ans=0;
   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());
   for(int i=0;i<n;i++)
   {
       ans+=abs(arr1[i]-arr2[i]);
   }
   return ans;
        
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
        vector<int> chairs(n), passengers(n);
        for (auto &val : chairs) cin >> val;
        for (auto &val : passengers) cin >> val;
        int ans = sol.findMoves(n, chairs, passengers);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends