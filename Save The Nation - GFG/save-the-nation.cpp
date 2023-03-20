//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://discuss.geeksforgeeks.org/comment/aa10e0644112e34aaf652378b22b6432


class Solution {
  public:
    string encryptString(string S) {
        // code here
        float len=sqrt(S.size());
        int x=floor(len);
        int y=ceil(len);
        // cout<<x<<' '<<y;
        int gap;
        if((x*y)==S.size())gap=y;
        else gap=y;
        string ans="";
        for(int i=0;i<gap;i++)
        {
            for(int j=i;j<S.size();j+=gap)
            {
                ans+=S[j];
            }
            ans+=' ';
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        cout << ob.encryptString(S) << endl;
    }
    return 0;
}
// } Driver Code Ends