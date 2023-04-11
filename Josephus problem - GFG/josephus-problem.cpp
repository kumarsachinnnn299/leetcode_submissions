//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

//https://www.youtube.com/watch?v=dzYq5VEMZIg
//Backtracking question
//Somewhat complex

class Solution
{
    public:
    
    int helper(int n,int k)
    {
        if(n==1)return 0;
        int temp=helper(n-1,k);
        return (temp+k)%n;
    }
    
    int josephus(int n, int k)
    {
       //Your code here
       return helper(n,k)+1;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends