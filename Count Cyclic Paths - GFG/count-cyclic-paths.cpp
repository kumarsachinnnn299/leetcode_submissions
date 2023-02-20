//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=LhkjDgU9cvw


//Not understood
class Solution{   
public:
    int countPaths(int N){
        // code here 
        if(N<2)return 0;
        long long m=1e9+7;
        long long ans=0;
        long long temp=2;
        while(temp<=N)
        {
            ans*=3;
            ans=ans%m;
            if(temp%2)ans-=3;
            else ans+=3;
            temp++;
        }
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
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends