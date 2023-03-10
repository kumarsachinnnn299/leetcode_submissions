//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Khud kiya


class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	if(n==3)return arr[0]*arr[1]*arr[2];
    	sort(arr,arr+n);
    	int cn=0,cp=0;
    	for(int i=0;i<n;i++){
    	    if(arr[i]<0)cn++;
    	    else cp++;
    	}
    	if(cp==0)
    	{
    	    return arr[n-1]*arr[n-2]*arr[n-3];
    	}
        if(cn==0||cn==1)
        {
            return arr[n-1]*arr[n-2]*arr[n-3];
        }
        if(cn>=2)
        {
            // long long start=arr[0]*arr[1];
            // long long end=arr[n-1]*arr[n-2];
            // if(start>end)
            // {
            //     return start*arr[n-1];
            // }
            // else{
            //     return end*arr[n-3];
            // }
            long long start=arr[0]*arr[1]*arr[n-1];
            long long end=arr[n-1]*arr[n-2]*arr[n-3];
            return max(start,end);
        }
        return 0;
 
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends