//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    // https://www.youtube.com/watch?v=Q1mmNTRAgdg
    

    long long int largestPrimeFactor(long long int N){
        // code here
        long long int ans=0;
        if(N==1||N==2)return N;
        for(long long int i=2;i*i<=N;i++ )
        {
              while(N%i==0)
                 {
                 ans=max(i,ans);
                     N/=i;
                    // cout<<N<<endl;
                    
                 }
            
            
            if(N==1)break;
        }
        if(N>1)ans=max(ans,N);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends