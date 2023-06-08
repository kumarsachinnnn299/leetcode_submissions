//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//good question
// https://www.youtube.com/watch?v=Y_f79vPHn5g&t=187s

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        vector<int>fact(n+1,1);
        for(int i=2;i<=n;i++)fact[i]=i*fact[i-1];
        vector<int>vis(n+1);
        string ans="";
        int temp=n;
        while(ans.size()<n)
        {
            int row=k/fact[temp-1];
            if(k%fact[temp-1])row++;
            for(int i=1;i<=n;i++)
            {
                if(vis[i]==0)
                {
                   row--;
                }
                
                if(row==0)
                {
                    ans+=to_string(i);
                    vis[i]=1;
                    break;
                }
            }
            k%=fact[temp-1];
            if(k==0)k=fact[temp-1];
            temp--;
        }
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends