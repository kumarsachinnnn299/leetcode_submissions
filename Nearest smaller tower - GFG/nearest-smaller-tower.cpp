//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=3POFI_fBsqs

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        
        
        //smaller on right
        for(int i=n-1;i>=0;i--)
        {
             
                while(!st.empty()&&arr[st.top()]>=arr[i])st.pop();
                if(!st.empty())ans[i]=st.top();
                
            
            st.push(i);
        }
        
        
        while(!st.empty())st.pop();
        
        //smaller on left
        for(int i=0;i<n;i++)
        {
            
                while(!st.empty()&&arr[st.top()]>=arr[i])st.pop();
                if(!st.empty()){
                    int cidx=st.top();
                    int pidx=ans[i];
                    if(pidx==-1)ans[i]=cidx;
                    else{
                        if(abs(i-cidx)<abs(i-pidx))ans[i]=cidx;
                        else if(abs(i-cidx)==abs(i-pidx))
                        {
                            if(arr[cidx]<=arr[pidx])ans[i]=cidx;
                        }
                    }
                   
                    
                }
                
            
            st.push(i);
        }
        
        
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends