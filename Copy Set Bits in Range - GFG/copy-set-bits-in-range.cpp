//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

//

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        
        int tempy=y,n=0;
        for(int i=1;i<=31;i++)
        {   
            if(i>=l&&i<=r)
            {
                if(tempy&1)
                {
                    int mask=1<<(i-1);
                    x|=mask;
                }
                
            }
            tempy=tempy>>1;
            
        }
        return x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends