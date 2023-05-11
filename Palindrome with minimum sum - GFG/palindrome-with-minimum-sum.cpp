//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Khud kiya
class Solution {
  public:
    int minimumSum(string str) {
        // code here
        int s=0,e=str.size()-1;
        int ans=0;
        while(s<e)
        {
            if(str[s]!=str[e]&&str[s]!='?'&&str[e]!='?')return -1;
            
            if(str[s]=='?'&&str[e]!='?')
            {
                str[s]=str[e];
                s++;
                e--;
            }
            else if(str[s]!='?'&&str[e]=='?')
            {
                str[e]=str[s];
                s++;
                e--;
            }
            else if(str[s]=='?'&&str[e]=='?')
            {   if(s==0)
                {
                   int s2=s,e2=e;
                
                   while(s2<e2&&str[s2]=='?'&&str[e2]=='?')
                   {
                       s2++;
                       e2--;
                   }
                   if(s2<e2)
                   {
                       if(str[s2]!='?')
                       {
                        str[s]=str[s2];
                        str[e]=str[s2];
                        s++;
                         e--;
                       }
                       else{
                        str[s]=str[e2];
                        str[e]=str[e2];
                        s++;
                         e--;
                       }
                   }
                   else{
                       str[s]='a';
                       str[e]='a';
                       s++;
                       e--;
                   }
                }
                else
                {
                str[s]=str[s-1];
                str[e]=str[e+1];
                s++;
                e--;
                }
                
                
            }
            else{
                s++;
                e--;
            }
        }
        
        for(int i=1;i<str.size();i++)
        {
            ans+=abs(str[i]-str[i-1]);
        }
        
        // cout<<str<<endl;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends