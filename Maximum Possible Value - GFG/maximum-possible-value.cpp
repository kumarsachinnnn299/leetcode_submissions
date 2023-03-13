//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=UiST2GTQnJs

class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long ans=0,c=0;
        int mine=INT_MAX;
        for(int i=0;i<N;i++)
        {
            if(B[i]>=2)
            {
                int sticks=B[i]-(B[i]%2);
                int len=A[i];
                ans+=(len*sticks);
                c+=sticks;
                mine=min(mine,A[i]);
            }
        }
        if(c%4)
        {
            ans-=(2*mine);//2*min is liye subtract kiya kyuki we are only inserting sticks with count 2,4,6,8,etc so mod 4
            //will only give 0 or
                        
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends