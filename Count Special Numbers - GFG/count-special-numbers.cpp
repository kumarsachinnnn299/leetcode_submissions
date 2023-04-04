//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=S5NLZuwlC2c

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int ans=0;
        int maxe=*max_element(arr.begin(),arr.end());
        vector<int>vis(maxe+1),count(maxe+1),special(maxe+1);
      
        
        for(int i=0;i<N;i++)
        {       count[arr[i]]++;
                if(vis[arr[i]]==0)
                {   vis[arr[i]]=1;
                     int st=2*arr[i];
                    for(int j=st;j<=maxe;j+=arr[i]){
                        special[j]=1;
                        
                    }
                }
             
            
        }
        for(auto i:arr)if(count[i]>1||special[i])ans++;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends