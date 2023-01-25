//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string small="",capital="",ans="";
        for(auto i:str)
        {
            if(i>=97)small+=i;
            else capital+=i;
        }
        sort(small.begin(),small.end());
        sort(capital.begin(),capital.end());
        // cout<<small<<endl;
        // cout<<capital<<endl;
        int s=0,c=0;
        for(auto i:str)
        {
            if(i<97)ans+=capital[s++];
            else ans+=small[c++];
        }
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends