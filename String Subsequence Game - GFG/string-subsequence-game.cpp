//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    void helper(int idx,string &s,string &temp,set<string>&ans)
{
	if(idx==s.size())
	{	if(temp.size()<=1)return;
		if((temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u')&&(temp[temp.size()-1]!='a'&&temp[temp.size()-1]!='e'&&temp[temp.size()-1]!='i'&&temp[temp.size()-1]!='o'&&temp[temp.size()-1]!='u'))ans.insert(temp);
		return;
	}

	helper(idx+1,s,temp,ans);
	temp+=s[idx];
	helper(idx+1,s,temp,ans);
	temp.pop_back();
}
  
    set<string> allPossibleSubsequences(string str) {
        // code here
        set<string>ans;
	string temp="";
	helper(0,str,temp,ans);
	return ans;
	
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends