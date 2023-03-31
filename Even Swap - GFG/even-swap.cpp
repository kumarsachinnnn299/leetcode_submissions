//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=DfoixsJ6vTQ

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &arr,int n)
        {
            // Code here
            
            // int s=0,e=0;
          
            
            // for(int i=1;i<n;i++)
            // {
            //     if(arr[s]%2==arr[i]%2)e=i;
            //     else{
            //         sort(arr.begin()+s,arr.begin()+e,greater<int>());
                    
            //         for(auto i:arr)cout<<i<<' ';
            //         cout<<endl;
            //         s=i;
            //         e=i;
            //     }
            // }
            // return arr;
            
            int i=0;
            while(i<n)
            {
                int j=i+1;
                while(j<n&&arr[j]%2==arr[j-1]%2)j++;
                sort(arr.begin()+i,arr.begin()+j,greater<int>());
                i=j;
            }
            return arr;
        }
        
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends