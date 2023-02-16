//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> arr) {
        // code here
        long long sum=accumulate(arr.begin(),arr.end(),0);
        
        if(N>K)
        {
            int temp=N-K;
        int s=0,e=K-1;
        while(temp--)
        {
            arr.push_back(sum);
            sum-=arr[s];
            s++;
            e++;
            sum+=arr[e];
            
            // for(auto i:arr)cout<<i<<' ';
            // cout<<endl;
        }
        return arr[N-1];
        }
        else return arr[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends