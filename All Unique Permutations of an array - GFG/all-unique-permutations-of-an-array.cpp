//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void helper(int idx,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        unordered_set<int>st;
        
        for(int i=idx;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end())continue;
            st.insert(nums[i]);
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
  
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        vector<vector<int>>ans;
        
        helper(0,arr,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends