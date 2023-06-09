//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


//brute force
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>st;
		    sort(S.begin(),S.end());
		    st.insert(S);
		    while(true)
		    {
		        int temp=st.size();
		        next_permutation(S.begin(),S.end());
		        st.insert(S);
		        if(st.size()==temp)break;
		    }
		    vector<string>ans;
		    for(auto i:st)ans.push_back(i);
		    return ans;
		}
		
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends