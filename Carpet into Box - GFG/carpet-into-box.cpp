//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=wWpZ65LaF84

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
       int len=A,width=B;//of Carpet
       int ans=0,step=0;
       while(len>C||width>D)
       {
           if(len>C)
           {
               step++;
               len/=2;
           }
           if(width>D)
           {
               step++;
               width/=2;
           }
       }
       ans=step;
       step=0;
       len=B,width=A;
            while(len>C||width>D)
       {
           if(len>C)
           {
               step++;
               len/=2;
           }
           if(width>D)
           {
               step++;
               width/=2;
           }
       }
       ans=min(ans,step);
       return ans;
       
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends