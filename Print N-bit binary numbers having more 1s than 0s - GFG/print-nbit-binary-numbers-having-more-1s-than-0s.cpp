//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//Khud kiya 
//Similar to generate parenthesis

class Solution{
public:	
    
    void helper(int idx,string &temp,vector<string>&ans,int N,int zc,int oc)
    {
        if(idx>N||oc<zc||oc>N||zc>N)return;
        if(zc<=oc&&temp.size()==N)ans.push_back(temp);
        temp+='1';
        oc++;
        helper(idx+1,temp,ans,N,zc,oc);
        temp.pop_back();
        oc--;
        temp+='0';
        zc++;
         helper(idx+1,temp,ans,N,zc,oc);
        temp.pop_back();
        zc--;
         
        
        
        
    }

	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>ans;
	    string temp="1";
	    int z=0,o=1;
	    helper(1,temp,ans,N,z,o);
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends