//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
       for(int i=1;i<=n;i++)arr.push_back(i);
       int x=arr[0];
       for(int i=1;i<arr.size();i++)x^=arr[i];
       int set=0;
       for(int i=0;i<=32;i++)
       {
           int temp=1<<i;
           if(x&temp)
           {
               set=temp;
               break;
           }
       }
       int f=0,s=0;
       for(auto i:arr)
       {
           if(set&i)f^=i;
           else s^=i;
       }
       for(int i=0;i<n;i++)
       {
           if(f==arr[i])
           {
               return {f,s};
           }
           else if(s==arr[i])
           {
               return {s,f};
           }
       }
       return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends