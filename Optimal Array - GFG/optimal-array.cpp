//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=oTqi1Fnuioo

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int>ans(n);
        for(int i=1;i<n;i++)a[i]+=a[i-1];
        ans[0]=0;
        for(int i=1;i<n;i++)
        {
            if((i+1)%2)
            {
                int temp=a[i]-a[(i/2)-1]-a[i/2];
                ans[i]=temp;
            }
            else{
                int temp=a[i]-(2*a[i/2]);
                ans[i]=temp;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends