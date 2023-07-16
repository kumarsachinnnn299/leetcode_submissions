//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    
	    //Khud kiya
	
		string FirstNonRepeating(string A){
		    // Code here
		    
		    string ans="";
		    vector<int>arr(26);
		     string prev;
		    int idx=0;
		   for(auto i:A)
		   {    
		       arr[i-'a']++;
		      prev+=i;
		       while(idx<prev.size()&&arr[prev[idx]-'a']!=1)
		       {
		           idx++;
		       }
		       if(idx==prev.size())ans+='#';
		       else ans+=prev[idx];
		       
		   }
		    return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends