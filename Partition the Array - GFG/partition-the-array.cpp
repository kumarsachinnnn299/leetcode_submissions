//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
// https://www.youtube.com/watch?v=-ogxPgK0nN8

//long qiestion based o binary search
class Solution
{
public:
    
    int binarysearch(vector<long long>&pre,long long start, long long end,long long tsum,long long subtract)
    {
        int sum=INT_MAX,idx=-1;
        long long fsum,Ssum,diff=INT_MAX;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            fsum=pre[mid]-subtract;
            Ssum=tsum-pre[mid];
            if(abs(fsum-Ssum)<diff)
            {
                diff=abs(fsum-Ssum);
                idx=mid;
            }
            if(fsum<Ssum)start=mid+1;
            else end=mid-1;
        }
        return idx;
        
        
    }

    long long minDifference(int N, vector<int> &A) {
        // code here
        long long  a,b,c,d,ans=INT_MAX;
        vector<long long>pre(N);
        pre[0]=A[0];
        for(int i=1;i<N;i++)
        {
            pre[i]=pre[i-1]+A[i];
        }
        
        for(int i=2;i<N-1;i++)
        {
            int idx=binarysearch(pre,0,i-1,pre[i-1],0);
            a=pre[idx];
            b=pre[i-1]-pre[idx];
            
            idx=binarysearch(pre,i,N-1,pre[N-1],pre[i-1]);
            c=pre[idx]-pre[i-1];
            d=pre[N-1]-pre[idx];
            
            ans=min(ans,max({a,b,c,d})-min({a,b,c,d}));
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends