//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=s4t3YDw4RcY
//See again for concept

class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long ans=0,ones=1,n=N,temp;
        while(n)
        {   
            temp=(N+1)/(2*ones);
            ans+=temp*ones;
             temp=(N+1)/ones;
            if(temp%2)ans+=((N+1)%ones);
            ones*=2;
            n>>=1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends