//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=MvklwzVz654&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=10
//Similar to question repeating element except two

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int xor1=0;
        for(int i=0;i<n;i++)
        {
            xor1^=(i+1);
            xor1^=arr[i];
        }
        
        int a=0,b=0;
        
        int rmsbmask=xor1&(-xor1);
        
        for(int i=0;i<n;i++)
        {
            if((rmsbmask&arr[i])==0)a^=arr[i];
            else b^=arr[i];
            if((rmsbmask&(i+1))==0)a^=(i+1);
            else b^=(i+1);
            
        }
        
        
   
        int *res;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==a){
                found=true;
                break;
            }
        }
        if(found)
        {
          int ans[]={a,b};
          res=ans;
        }
        else{
            int ans[]={b,a};
            res=ans;
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends