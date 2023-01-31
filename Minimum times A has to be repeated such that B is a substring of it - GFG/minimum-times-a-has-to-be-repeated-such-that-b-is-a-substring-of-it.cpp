//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=66oFU0xtg_g

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
       string s=A;
       int ans=1;
       while(A.size()<B.size())
       {
           A+=s;
           ans++;
       }
       if(A.find(B)!=-1)return ans;
       A+=s;
       ans++;
       if(A.find(B)!=-1)return ans;
       return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends