//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > arr, int n)
    {
        // code here 
        int rmax=0,cmax=0;
        for(int i=0;i<n;i++)
        {   int tr=0,tc=0;
            for(int j=0;j<n;j++)
            {
                tr+=arr[i][j];
                tc+=arr[j][i];
            }
            rmax=max(rmax,tr);
            cmax=max(cmax,tc);
        }
        
        int ansr=0,ansc=0;
      
        for(int i=0;i<n;i++)
            {   int tr=0,tc=0;
                for(int j=0;j<n;j++)
                {
                    tr+=arr[i][j];
                    tc+=arr[j][i];
                }
               ansr+=(rmax-tr);
               ansc+=(cmax-tc);
            }
            if(rmax>cmax)return ansr;
            return ansc;
            
        
        
    
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends