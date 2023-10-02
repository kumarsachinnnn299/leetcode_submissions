//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
         string ans="";
        while(n)
        {
            int move=(n-1)%26;
            // cout<<move<<endl;
            ans=char(65+move)+ans;
            n--;
            (n)/=26;
            
            // cout<<n<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends