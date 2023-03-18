//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
  
  long long help(int n,vector<int> v,int k){
      long long ans=0;
      long long crr=0;
      map<long long,long long>m;
      m[0]=1;
      long long sum=0;
      for(int i=0;i<n;i++){
          if(v[i]<k){
              sum--;
              crr -= m[sum];
          }
          else {
              crr += m[sum];
              sum++;
          }
          ans+=crr;
          m[sum]++;
      }
      return ans;
  }
  
    long long countSubarray(int n,vector<int> v,int k) {
        // code here
        // int n=v.size();
        return help(n,v,k) - help(n,v,k+1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends