//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=3gJxLkPPW6M&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=11

//Long but easy concept

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int tn=-1,tnp1=0,tnp2=0;
        for(int i=0;i<N;i++)
        {
            int cwtn=tn&arr[i];
            int cwtnp1=tnp1&arr[i];
            int cwtnp2=tnp2&arr[i];
            
            tn=tn&(~cwtn);
            tnp1=tnp1|cwtn;
            
           tnp1=tnp1&(~cwtnp1);
            tnp2=tnp2|cwtnp1;
            
            tnp2=tnp2&(~cwtnp2);
            tn=tn|cwtnp2;
        }
        return tnp1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends