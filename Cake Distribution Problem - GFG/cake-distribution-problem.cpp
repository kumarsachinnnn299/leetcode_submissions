//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Binary search questioon
// https://www.youtube.com/watch?v=NuyyVasK1Uw


class Solution{
    public:
    
    bool isvalid(int mid,vector<int>&arr,int k)
    {
        int c=0,sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum>=mid)
            {
                c++;
                sum=0;
            }
        }
        return c>=(k+1);
    }
    
    int maxSweetness(vector<int>& arr, int n, int k) {
    // Write your code here.
    int s=1,e=accumulate(arr.begin(),arr.end(),0);
    int ans=1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isvalid(mid,arr,k))
        {
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    
    return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends