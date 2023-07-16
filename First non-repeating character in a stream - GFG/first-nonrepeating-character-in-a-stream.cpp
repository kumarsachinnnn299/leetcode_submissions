//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    string ans="";
		    vector<int>arr(26);
		     char prev='#';
		     queue<char>q;
		    
		   for(auto i:A)
		   {    
		       arr[i-'a']++;
		       q.push(i);
		       while(!q.empty()&&arr[q.front()-'a']!=1)
		       {
		           q.pop();
		       }
		       if(q.empty())ans+='#';
		       else ans+=q.front();
		   
		      
		       
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