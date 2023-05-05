//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
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
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int findK(int arr[MAX][MAX], int n, int m, int k)
{
//Your code here
    vector<int>ans;
        int c1=0,c2=m,r1=0,r2=n;
        while(c1<c2&&r1<r2)
        {
            for(int i =c1;i<c2;i++)
            {
                ans.push_back(arr[r1][i]);
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                ans.push_back(arr[i][c2-1]);
            }
            c2--;
            
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    ans.push_back(arr[r2-1][i]);
                }
                 r2--;
            }
           
            if(c1<c2)
            {
                for(int i=r2-1;i>=r1;i--)
                {
                    ans.push_back(arr[i][c1]);
                }
                c1++;
            }
            
        }
        return ans[k-1];
}

