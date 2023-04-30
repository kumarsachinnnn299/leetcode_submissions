//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Not an easy question
// https://www.youtube.com/watch?v=NlUseSI8HNE&t=771s

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
        // sort(intervals.begin(),intervals.end());
        map<int,int>mp;
        for(auto i:intervals)
        {
            mp[i[0]]+=1;
            // mp[i[1]]+=1;
            mp[i[1]+1]-=1;
        }
        int ans=-1,temp=0;
        bool flag=false;
        for(auto i:mp)
        {
            if(temp>=k&&i.second<0)
            {
                ans=i.first-1;
            }
            
            temp+=i.second;
            if(temp>=k)ans=i.first;
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends