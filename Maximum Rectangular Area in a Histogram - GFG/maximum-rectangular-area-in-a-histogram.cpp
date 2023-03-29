//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// same as leetcode question
//https://leetcode.com/submissions/detail/924315799/

//Stack question
//based on next smaller element and orevious smaller element
// https://www.youtube.com/watch?v=vhUxKxiconE

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    vector<int> next_or_prev_smaller(long long heights[],bool prev,int n)
    {   vector<int>res;
        stack<int>st;
        if(prev)
        {
            for(int i=0;i<n;i++)
            {
                // if(st.empty())st.push(-1);
                while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
                if(st.empty())res.push_back(-1);
                else res.push_back(st.top());
                st.push(i);
            }
        }
        else{
            for(int i=n-1;i>=0;i--)
            {
                while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
                if(st.empty())res.push_back(n);
                else res.push_back(st.top());
                st.push(i);
            }
        }
     
     if(!prev)reverse(res.begin(),res.end());
     return res;
    }
       
    
    long long getMaxArea(long long heights[], int n)
    {
        // Your code here
        //  int n=heights.size();
        vector<int>next_smaller(n),prev_smaller(n);
        next_smaller=next_or_prev_smaller(heights,false,n);
         prev_smaller=next_or_prev_smaller(heights,true,n);
        long long ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,heights[i]*(next_smaller[i]-prev_smaller[i]-1));
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends