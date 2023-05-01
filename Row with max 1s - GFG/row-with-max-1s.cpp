//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// https://www.youtube.com/watch?v=5fmwbs93Y0w&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=5

/*

approach 2

j lenge m-1 se

in each row j-- krenge tab tak jab tak 1 mil rha h 

TC O(m+n)

*/

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=-1,j=m-1;
	    for(int i=0;i<n;i++)
	    {
	        bool flag=false;
	        while(j>=0&&arr[i][j])
	        {
	            j--;
	            flag=true;
	        }
	        if(flag)
	        {
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