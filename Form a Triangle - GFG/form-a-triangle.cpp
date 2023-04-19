//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
        int noOfTriangles( vector<int> arr, int n)
    {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int ans=0;
        int i,j,k=0;
        for( i=n-1;i>1;i--)
        {   j=i-1;
            k=0;
            while(k<j)
            {
                if((arr[k]+arr[j])>arr[i]){
                    ans+=(j-k);
                    j--;
                }
                else k++;
                
            }
           
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    Solution ob;
	    cout << ob.noOfTriangles(v, n) << endl;
	}
	return 0;
}
// } Driver Code Ends