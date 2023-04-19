//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=2e1LUkZoTiE&list=PLjeQ9Mb66hM33kyoJjJbHf72Rb0G70Sae&index=5
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int ans=0;
        int i,j,k=0;
        for( i=n-1;i>1;i--)
        {   j=i-1;
            k=0;
            while(k<j)
            {
                if((arr[k]+arr[j])>arr[i]){
                    ans+=(j-k);
                    j--;
                }
                else k++;
                
            }
           
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends