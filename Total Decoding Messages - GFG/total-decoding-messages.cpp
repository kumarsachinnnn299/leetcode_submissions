//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=rmlOwUYeWv4
class Solution {
	public:
	    
	    int mod=1e9+7;
	    
	    int helper(int idx,string &s,vector<int>&dp)
	    {
	        if(idx==s.size())return 1;
	        if(dp[idx]!=-1)return dp[idx];
	        int c1=0,c2=0;
	        if(s[idx]>='1'&&s[idx]<='9')
	        {
	            c1=(helper(idx+1,s,dp))%mod;
	            
	        }
	        if(idx<s.size()-1)
	        { string temp=s.substr(idx,2);
	        if(temp>="10"&&temp<="26")
	        {
	            c2=(helper(idx+2,s,dp))%mod;;
	        }
	            
	        }
	       
	        return dp[idx]=(c1+c2)%mod;
	        
	    }
	
		int CountWays(string str){
		    // Code here
		    vector<int>dp(str.size(),-1);
		    return helper(0,str,dp);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends