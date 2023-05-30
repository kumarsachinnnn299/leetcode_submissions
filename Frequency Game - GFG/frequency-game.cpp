//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        int ans=INT_MIN;
        unordered_map<int,int>mp;
        int minfreq=INT_MAX;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
            // minfreq=min(minfreq,mp[arr[i]]);
        }
        
        
        for(auto i:mp)
        {
            minfreq=min(minfreq,i.second);
            // cout<<i.first<<' '<<
        }
        
        // cout<<minfreq<<endl;
        for(auto i:mp)
        {
            if(i.second==minfreq)ans=max(ans,i.first);
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends