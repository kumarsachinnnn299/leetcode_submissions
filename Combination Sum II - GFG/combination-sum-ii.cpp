//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Recursion playlist by fraz

class Solution {
  public:
  
    void helper(int idx,int sum,vector<int>&temp,vector<vector<int>>&ans,vector<int>&nums,int target)
    {    if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        if(idx>=nums.size()||sum>target)return;
        
        int tidx=idx;
        while(tidx<nums.size()&&nums[tidx]==nums[idx])tidx++;
        helper(tidx,sum,temp,ans,nums,target);
        
        sum+=nums[idx];
        temp.push_back(nums[idx]);
        helper(idx+1,sum,temp,ans,nums,target);
        sum-=nums[idx];
        temp.pop_back();
        
       
    }
  
    vector<vector<int>> combinationSum2(vector<int> &nums, int target) {
        // Write your code here
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int s=0;
        helper(0,s,temp,ans,nums,target);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends