//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    bool ispal(string s)
    {
        int i=0,e=s.size()-1;
        while(i<e){
            if(s[i]!=s[e])return false;
            i++;
            e--;
        }
        return true;
    }

    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string,int>mp;
        for(auto i:arr)
        {
         
            mp[i]++;
            string temp=i;
            reverse(temp.begin(),temp.end());
            mp[temp]++;
        }
        int c=0;
        for(auto i:mp)
        {
            if(i.second==1){
                c++;
                
                if(ispal(i.first)==false)return false;
            }
            if(c>1)return false;
            if(i.second%2)return false;
            
            
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends