//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Khud kiya

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        // int n=arr.size();
        if(n==1)return 0;
        n/=2;
        sort(arr.begin(),arr.begin()+n);
        sort(arr.begin()+n,arr.end(),greater<int>());
        
        int i=n-1,j=n;
        int ans=0;
        while(i>=0&&j<arr.size())
        {
            if(arr[i]>=(5*arr[j]))
            {
                ans+=(arr.size()-j);
                i--;
            }
            else{
                j++;
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends