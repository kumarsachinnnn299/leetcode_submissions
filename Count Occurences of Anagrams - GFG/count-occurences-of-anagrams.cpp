//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int>arr(26),temp(26);
	    int ans=0;
	    for(auto i:pat)arr[i-'a']++;
	    for(int i=0;i<pat.size();i++)temp[txt[i]-'a']++;
	    
	    int i=1,j=pat.size();
	    while(j<txt.size())
	    {
	        if(arr==temp)ans++;
	       // temp=arr;
	        temp[txt[i-1]-'a']--;
	        temp[txt[j]-'a']++;
	        i++;
	        j++;
	    }
	    if(arr==temp)ans++;
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends