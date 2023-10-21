//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

//https://www.youtube.com/watch?v=3ptzD0_lNu0
//Observe the pattern of no 1to N and their frequency

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long ans=0;
        for(int i=1;i<=N;i++)ans+=(i*(N/i));
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
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends