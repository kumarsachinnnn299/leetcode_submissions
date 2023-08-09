//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */
//Recursion playlist fraz
//Each bucket will ask each element onw by one  wheter that element want to go into that bucket
//https://www.youtube.com/watch?v=h_6MldQ8vB8&list=PLjkkQ3iH4jy82KRn9jXeFyWzvX7sqYrjE&index=20
class Solution{
  public:
  
    bool helper(int idx,int bucketno,int bucketsum,int rsum,int a[],int n,int k,vector<int>&vis)
    {   if(bucketno==k+1)return true;
       if(bucketsum==rsum)
       {
           return helper(0,bucketno+1,0,rsum,a,n,k,vis);
       }
       
       if(bucketsum>rsum)return false;
       if(idx>=n)return false;
       
       if(vis[idx])
       {
           return helper(idx+1,bucketno,bucketsum,rsum,a,n,k,vis);
       }
       else{
           
           //pick
           bucketsum+=a[idx];
           vis[idx]=1;
           bool t1=helper(idx+1,bucketno,bucketsum,rsum,a,n,k,vis);
           
           bucketsum-=a[idx];
           vis[idx]=0;
           bool t2=helper(idx+1,bucketno,bucketsum,rsum,a,n,k,vis);
           return t1|t2;
       }
        
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         
         int reqsum=0;
         for(int i=0;i<n;i++)reqsum+=a[i];
         if(reqsum%k!=0)return false;
         reqsum/=k;
         vector<int>vis(n,0);
         
         
         return helper(0,1,0,reqsum,a,n,k,vis);
         
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
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends