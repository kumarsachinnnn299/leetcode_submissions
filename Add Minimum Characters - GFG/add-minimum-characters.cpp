//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=cZJRB8j9nA8

class Solution{   
public:
    
    bool ispalindrome(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }

    int addMinChar(string str){    
        //code here
      if(ispalindrome(str))return 0;
      for(int i=str.size()-1;i>=0;i--)
      {
          if(ispalindrome(str.substr(0,i)))return str.size()-i;
      }
      return str.size()-1;
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends