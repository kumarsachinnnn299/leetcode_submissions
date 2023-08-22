//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=Q01FiVtwc8A
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n)
        {
            int moves=(n-1)%26;
            ans=char('A'+moves)+ans;
            n--;
            n/=26;
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