//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


//GFG pe hi diya h ye
// Get count of all set bits at odd positions (For 23 it's 3).
// Get count of all set bits at even positions (For 23 it's 1).
// If the difference between the above two counts is a multiple of 3 then the number is also a multiple of 3.

class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int co=0,ce=0,c=1;
	    for(int i=s.size()-1;i>=0;i--)
	    {
	        if(c%2&&s[i]=='1')co++;
	        else if(c%2==0&&s[i]=='1')ce++;
	        c++;
	    }
	    if(abs(ce-co)%3==0)return 1;
	    return 0;
	    
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends