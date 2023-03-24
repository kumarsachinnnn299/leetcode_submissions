//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
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
        // for(auto i:arr)
        // {
        //     if(i>1)rc+=(i-1);
        // }
        
        int i=0,j=S.size()-1;
        bool f=true;//to show travelling from front ie left to right
        while(i<j)
        {   
            // cout<<i<<' '<<j<<" -> "<<S<<endl;
            
            if(f)
            {
                if(arr[S[i]-'a']>1)
                {
                    arr[S[i]-'a']--;
                    S.erase(i,1);
                    f=false;
                    j--;
                }
                else i++;
            }
            else{
                if(arr[S[j]-'a']>1)
                {
                    arr[S[j]-'a']--;
                    S.erase(j,1);
                    f=true;
                    j--;
                }
                else j--;
            }
            
            // cout<<i<<' '<<j<<" -> "<<S<<endl;
        }
        
        if(!f)reverse(S.begin(),S.end());
        return S;
       
     
      
       
        
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