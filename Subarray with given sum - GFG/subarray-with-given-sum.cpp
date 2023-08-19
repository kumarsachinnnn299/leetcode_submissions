//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long ts)
    {
        // Your code here
        if(ts==0)return {-1};
        int s=0,e=0;
        long long sum=arr[0];
        
        while(e<n)
        {
            if(sum<ts)
            {
                e++;
                sum+=arr[e];
            }
            else if(sum>ts)
            {
                sum-=arr[s];
                s++;
            }
            else return {s+1,e+1};
        }
        return {-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends