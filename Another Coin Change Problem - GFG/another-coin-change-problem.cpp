//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

// https://www.youtube.com/watch?v=FMrzSdt7kXg


class Solution {
  public:
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        vector<vector<int>>dp(K+1, vector<int>(target+1));
        dp[0][0]=1;
        for(int i=0;i<N;i++)
        {
            for(int j=1;j<=K;j++)
            {
                for(int k=1;k<=target;k++)
                {
                    if(coins[i]<=k&&dp[j][k]==false)
                    {
                        dp[j][k]=dp[j-1][k-coins[i]];
                    }
                }
            }
        }
        return dp[K][target];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends