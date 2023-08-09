//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Fraz recursion playlist
class Solution {
  public:
  
    void helper(int cval,int sum,vector<int>&temp,int nums,vector<vector<int>>&ans,int k)
    {
        if(temp.size()==k&&sum==nums)
        {
            ans.push_back(temp);
            return;
        }
        if(cval>9||temp.size()>k||sum>nums)return;
        
        
         helper(cval+1,sum,temp,nums,ans,k);
        sum+=cval;
        temp.push_back(cval);
        helper(cval+1,sum,temp,nums,ans,k);
        sum-=cval;
        temp.pop_back();
        
       
       
        
        
    }
  
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        int s=0;
        helper(1,s,temp,N,ans,K);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends