//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-3;i++)
        {   int tempi=arr[i];
            for(int j=i+1;j<n-2;j++)
            
            {   int tempj=arr[j];
                int s=j+1,e=n-1;
                while(s<e)
                {
                    if(arr[i]+arr[j]+arr[s]+arr[e]<k)s++;
                    else if(arr[i]+arr[j]+arr[s]+arr[e]>k)e--;
                    else {
                        ans.push_back({arr[i],arr[j],arr[s],arr[e]});
                        int temp1=arr[s],temp2=arr[e];
                        while(s<e&&arr[s]==temp1)s++;
                        while(e>s&&arr[e]==temp2)e--;
                    }
                }
                while(j<n-2&&arr[j]==tempj)j++;
                j--;
                
            }
             while(i<n-3&&arr[i]==tempi)i++;
                i--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends