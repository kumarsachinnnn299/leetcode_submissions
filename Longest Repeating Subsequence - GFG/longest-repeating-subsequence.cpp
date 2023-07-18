//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=oL7GCrcdaJI
//LCS hi nikalna h but is tarah ki value to same ho but index same n ho

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string str2=str;
		    vector<vector<int>>dp(str.size()+1,vector<int>(str.size()+1));
		    for(int i=1;i<=str.size();i++)
		    {
		        for(int j=1;j<=str.size();j++)
		        {
		            if(str[i-1]==str2[j-1]&&(i!=j))
		            {
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		        }
		    }
		    return dp[str.size()][str.size()];
		    
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
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends