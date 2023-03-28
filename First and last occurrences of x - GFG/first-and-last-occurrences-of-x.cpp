//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Adarsh k concept se
vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int foccurence=-1,lastoccurence=-1,s=0,e=n-1;
    
    //for first occurence
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==x)
        {
            foccurence=mid;
            e=mid-1;
        }
        else if(arr[mid]>x)e=mid-1;
        else s=mid+1;
    }
    
    // for last occurence
    s=0,e=n-1;
        while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==x)
        {
            lastoccurence=mid;
            s=mid+1;
        }
        else if(arr[mid]>x)e=mid-1;
        else s=mid+1;
    }
    return {foccurence,lastoccurence};
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends