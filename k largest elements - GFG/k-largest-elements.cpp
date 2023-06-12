//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>ans;
	    priority_queue<int,vector<int>, greater<int>>q;
	    for(int i=0;i<n;i++)
	    {
	        if(q.size()<k)q.push(arr[i]);
	        else{
	            if(arr[i]>q.top())
	            {
	                q.pop();
	                q.push(arr[i]);
	            }
	        }
	    }
	   while(q.size())
	   {
	       ans.push_back(q.top());
	       q.pop();
	   }
	   reverse(ans.begin(),ans.end());
	    return ans;
	    
	}
	

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends