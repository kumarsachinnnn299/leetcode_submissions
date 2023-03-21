//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=Ofl4KgFhLsM
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long S)
    {
        // Your code here
        // vector<int>ans;
        if(S==0)return {-1};
        long long cursum=arr[0];
        int s=0,e=0;
        while(e<n)
        {   

            if(cursum==S)return {s+1,e+1};
            else if(cursum>S){
                cursum-=arr[s];
                s++;
                
            }
            else if(cursum<S){
                //   cursum+=arr[e];
                cursum+=arr[++e];
                
            }
                
                // cout<<s<<' '<<e<<' '<<cursum<<endl;
                
        }
        if(cursum==S)return {s+1,e+1};
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