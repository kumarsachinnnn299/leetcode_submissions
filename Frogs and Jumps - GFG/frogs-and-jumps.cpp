//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=-zB6rpW1918

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
      vector< int>vis(leaves+1,0);//check visited or not
      int ans=0;
      for(int i=0;i<N;i++)
      {
          int temp=frogs[i];
          if(temp<=leaves&&vis[temp]==0)
          {
              for(int j=temp;j<=leaves;j+=temp)
              {
                  vis[j]=1;
              }
          }
      }
      for(int i=1;i<=leaves;i++)
      {
       if(vis[i]==0)ans++;   
      }
      return ans;
      
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends