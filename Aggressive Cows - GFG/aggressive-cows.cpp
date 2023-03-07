//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++


// https://www.youtube.com/watch?v=wSOfYesTBRk

class Solution {
public:


    bool canplace(vector<int> &stalls,int dist,int cows)
    {
        int position=0;
        int cowsplaced=1;
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-stalls[position]>=dist)
            {
                cowsplaced++;
                position=i;
            }
            if(cowsplaced==cows)return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int ans=INT_MIN;
        sort(stalls.begin(),stalls.end());
        int low=1,high=stalls[n-1]-stalls[0];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(canplace(stalls,mid,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends