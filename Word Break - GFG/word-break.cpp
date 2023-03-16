//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

// https://www.youtube.com/watch?v=_iIK7Gu7MNo&t=273s

class Solution
{
public:
    
    int dp[1101];
    int helper(int start, string s, set<string>&st)
    {
        if(start==s.size())return 1;
        if(dp[start]!=-1)return dp[start];
        string temp="";
        for(int i=start;i<s.size();i++)
        {
            temp+=s[i];
            if(st.find(temp)!=st.end()&&helper(i+1,s,st))return dp[start]=1;
        }
        return dp[start]=0;
    }
    
    int wordBreak(string A, vector<string> &B) {
        //code here
        memset(dp,-1,sizeof dp);
        set<string>st;
        for(auto i:B)st.insert(i);
        return helper(0,A,st);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends