//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        int minlen=INT_MAX;
        for(int i=0;i<n;i++){
            int l=arr[i].size();
            minlen=min(minlen,l);
            
        }
        string ans="";
        for(int i=0;i<minlen;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[j][i]!=arr[j-1][i]){
                   if(ans.size()==0)return "-1";
                    return ans;
                    
                }
            }
            ans+=arr[0][i];
        }
        if(ans.size()==0)return "-1";
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends