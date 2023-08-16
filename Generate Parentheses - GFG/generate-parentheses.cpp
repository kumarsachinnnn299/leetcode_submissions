//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses

//Fraz recursion playlist
//https://www.youtube.com/watch?v=eyCj_u3PoJE&t=3s
//Each place has two option to select- '('or ')'
//Breaking condition bas thodi sochni h ki bas condition ky a hogi

class Solution
{
    public:
    
    void helper(int c,int o,vector<string>&ans,string s)
    {   
        if(c==0&&o==0)
        {
            ans.push_back(s);
            return ;
        }
        if(c==0||o>c)
        {
           return;
        }
        
        if(o==0)
        {
             while(c--)s+=')';
            ans.push_back(s);
            return;
        }
        
        // if(o==0)
        // {
        //     s+='(';
        //     o--;
        //     helper(c,o,ans,s);
        // }
        // else{
            
            s+='(';
            o--;
             helper(c,o,ans,s);
             o++;
             s.pop_back();
             s+=')';
             c--;
             helper(c,o,ans,s);
             
        // }
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int c=n,o=n-1;
        vector<string>ans;
        string s="(";
        helper(c,o,ans,s);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends