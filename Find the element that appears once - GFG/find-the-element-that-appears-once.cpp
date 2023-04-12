//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int nums[], int n){
	    //code
	    int s=0,e=n-1;
        // if(n==1)return nums[0];
        while(s<=e)
        {   
            int mid=s+(e-s)/2;
            if(mid%2==0)
            {
                if(nums[mid+1]!=nums[mid])e=mid-1;
                else s=mid+1;
            }
            else{
                if(nums[mid-1]!=nums[mid])e=mid-1;
                else s=mid+1;
            }
        }
        

        
        return nums[e+1];
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends