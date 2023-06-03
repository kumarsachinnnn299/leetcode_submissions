//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string ans="";
            string temp="";
            for(auto i:s)
            {   
                if(i=='*'||i=='/'||i=='+'||i=='-')
                {
                    ans=i+temp+ans; 
                    temp="";
                }
                    else temp+=i;
            }
            
            return temp+ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends