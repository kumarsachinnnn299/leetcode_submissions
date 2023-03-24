//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//Pichla submission jo khud se kra usme erase kra h
//uski complexity jyada h
//ye same hi h bas rhoda sa farak

class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int rc=0;//store count of extra repeated characters 
        vector<int>arr(26);
       
        for(auto i:S)
        {
            arr[i-'a']++;
          
        }
   
        int i=0,j=S.size()-1;
        bool f=true;//to show travelling from front ie left to right
        while(i<j)
        {   
            
            
            if(f)
            {
                if(arr[S[i]-'a']>1)
                {
                    arr[S[i]-'a']--;
                    S[i]='@';
                    i++;
                    f=false;
                 
                }
                else i++;
            }
            else{
                if(arr[S[j]-'a']>1)
                {
                    arr[S[j]-'a']--;
                    S[j]='@';
                    f=true;
                    j--;
                }
                else j--;
            }
            
           
        }
        string ans="";
        for(auto i:S)
        {
            if(i!='@')ans+=i;
        }
        if(!f)reverse(ans.begin(),ans.end());
        return ans;
       
     
      
       
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends