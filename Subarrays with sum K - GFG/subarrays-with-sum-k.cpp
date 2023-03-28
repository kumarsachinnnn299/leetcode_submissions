//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//Same as leetcode question

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        unordered_map<int,int>mp;
        int ans=0,cursum=0;
        for(int i=0;i<N;i++)
        {
            cursum+=Arr[i];
            if(cursum==k)ans++;
            if(mp.find(cursum-k)!=mp.end())ans+=mp[cursum-k];
            mp[cursum]++;
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
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends