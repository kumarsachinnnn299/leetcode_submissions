//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        long long ans=0;
        priority_queue<int>q;
        for(int i=0;i<N;i++)
        {
            q.push(A[i]);
        }
        while(K--)
        {
            int temp=q.top();
            q.pop();
            ans+=temp;
            temp/=2;
            q.push(temp);
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends