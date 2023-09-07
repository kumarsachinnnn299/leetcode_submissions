//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=Dzko1Gi731w

class Solution {
  public:
    
   
  
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if(start==end)return 0;
        vector<int>vis(1e5);
      queue<pair<int,int>>q;
      q.push({start,0});
      while(!q.empty())
      {
          auto temp=q.front();
          q.pop();
          int steps=temp.second;
          int num=temp.first;
          
          for(int i=0;i<arr.size();i++)
          {
              long mul=(arr[i]*num)%100000;
              int ns=int(mul);
              if(ns==end)return steps+1;
              if(vis[ns]==0)
              {
                  q.push({ns,steps+1});
                  vis[ns]=1;
                  
              }
          }
          
      }
      return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends