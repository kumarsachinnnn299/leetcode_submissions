//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int nums[], int n, int target) {
	    // code here
	    unordered_map<int,int>mp;
      
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])==mp.end())mp[nums[i]]=i;
            
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end()&&(i!=mp[target-nums[i]]))return true;
        }
       return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends