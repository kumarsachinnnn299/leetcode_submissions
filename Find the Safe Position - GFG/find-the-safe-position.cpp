//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=ULUNeD0N9yI&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=19
class Solution {
  public:
    
    void helper(int cidx, int k,vector<int>&arr)
    {
        if(arr.size()==1)return;
        
        arr.erase(arr.begin()+cidx);
       
        int n=arr.size();
        cidx=(cidx+k)%n;
        helper(cidx,k,arr);
    }
  
    int safePos(int n, int k) {
        // code here
        if(k==1)return n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)arr[i]=i+1;
        k--;
        int cidx=k%n;
        helper(cidx,k,arr);
        return arr[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends