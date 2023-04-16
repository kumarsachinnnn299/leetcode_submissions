//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=IcyTkpjhQHI&list=PLjeQ9Mb66hM3hgJfIvc32sTRQOpZ2SXxC&index=9
//see how gcd works


class Solution {
  public:
    
    long long GCD(long long a,long long b)
    {
        if(b==0)return a;
        return GCD(b,a%b);
    }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long hcf=GCD(A,B);
        long long lcm=(A*B)/hcf;
        return {lcm,hcf};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends