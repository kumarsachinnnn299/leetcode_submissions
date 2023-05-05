//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&arr)  {
        // code here
        vector<int>ans;
        int c1=0,c2=arr[0].size(),r1=0,r2=arr.size();
        while(c1<c2&&r1<r2)
        {
            for(int i =c1;i<c2;i++)
            {
                ans.push_back(arr[r1][i]);
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                ans.push_back(arr[i][c2-1]);
            }
            c2--;
            
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    ans.push_back(arr[r2-1][i]);
                }
                 r2--;
            }
           
            if(c1<c2)
            {
                for(int i=r2-1;i>=r1;i--)
                {
                    ans.push_back(arr[i][c1]);
                }
                c1++;
            }
            
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
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends