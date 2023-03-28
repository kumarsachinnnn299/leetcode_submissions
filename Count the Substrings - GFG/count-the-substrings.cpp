//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int ans=0;
        for(int i=0;i<S.size();i++)
        {   int cc=0,cs=0;
            if(S[i]-'a'>=0)cs++;
            else cc++;
            
            for(int j=i+1;j<S.size();j++)
            {
                if(S[j]-'a'>=0)cs++;
            else cc++;
            
            if(cc==cs)ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends