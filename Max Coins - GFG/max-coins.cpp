//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=yIKdB04jgVI

/*
approach:

pehle sort kr diya starting idx k base pe 

-> har ek ko selet krenge and next suitable elements ki range binary search k thorugh mil jayenge
-> ab use range m max value k liye ek array maintain krr lenge jo fill hogi end se traverse krte hue
-> ye array O(1) m max element to right of any idx de degi 
and after finding pair for each idx return max

*/

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &arr){
        // Code here
        vector<int>maxr(n);
        sort(arr.begin(),arr.end());
        maxr[n-1]=arr[n-1][2];
        for(int i=n-2;i>=0;i--)
        {
            maxr[i]=max(arr[i][2],maxr[i+1]);
        }
       int ans=INT_MIN;
       
       for(int i=0;i<n;i++)
       {
           int s=i+1,e=n-1;
           int val1=arr[i][2],val2=0,idx=-1;
           while(s<=e)
           {
               int mid=s+(e-s)/2;
               if(arr[mid][0]>=arr[i][1])
               {
                   idx=mid;
                   e=mid-1;
               }
               else s=mid+1;
           }
           if(idx!=-1)
           {
                val2=maxr[idx];
           val1+=val2;
           }
          
           ans=max(ans,val1);
           
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
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends