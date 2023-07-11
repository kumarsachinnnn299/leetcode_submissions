//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends

//Simple bas iteration kese hoga ye samjhna h
// https://www.youtube.com/watch?v=WI_fsPMJMiE

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int lr=0,ur=n-1,lc=0,uc=m-1;
 		int c=0;
 		while(c<k)
 		{
 		for(int i=lc;i<=uc;i++)
 		{   c++;
 		    if(c==k)return a[lr][i];
 		    
 		}
 		lr++;
 		for(int i=lr;i<=ur;i++)
 		{
 		    c++;
 		    if(c==k)return a[i][uc];
 		}
 		uc--;
 		for(int i=uc;i>=lc;i--)
 		{
 		    c++;
 		    if(c==k)return a[ur][i];
 		}
 		ur--;
 		for(int i=ur;i>=lr;i--)
 		{
 		    c++;
 		    if(c==k)return a[i][lc];
 		}
 		lc++;
 		}
 		return 0;
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends