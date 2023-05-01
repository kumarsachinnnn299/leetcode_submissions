//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// https://www.youtube.com/watch?v=5fmwbs93Y0w&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=5

/*

approach 1

in each row find index of first 1 using binary search and return the row with min index of first 1

*/

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=-1,col=m;
	    for(int i=0;i<n;i++)
	    {
	        int s=0,e=m-1;
	        int idx=m;
	        while(s<=e)
	        {
	            int mid=s+(e-s)/2;
	            if(arr[i][mid]==1){
	                idx=mid;
	                e=mid-1;
	                
	            }
	            else s=mid+1;
	        }
	       // cout<<idx<<endl;
	        if(idx<col)
	        {   col=idx;
	            ans=i;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends