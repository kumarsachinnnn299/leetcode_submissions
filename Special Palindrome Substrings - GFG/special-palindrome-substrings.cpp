//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=gGgKa2y3c1I
class Solution{
    //Complete the function and return minimum number of operations
    public:
    
    int helper(string& s,int st,int e)
    {   int c=0;
        
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j]){
                if(i>=st&&j<=(st+e-1))return 1e9;
                c++;
            }
            i++;
            j--;
        }
    //   cout<<s<<c<<endl;
        
        return c;
    }
    
    int specialPalindrome(string s1, string s2){
        //Code Here
        int l1=s1.size(),l2=s2.size();
        if(l2>l1)return -1;
        int ans=1e9;
        string temp=s1;
        for(int i=0;i<=l1-l2;i++)
        {
          int op=0;
          for(int j=0;j<l2;j++)
          {
              if(temp[i+j]!=s2[j])op++;
              temp[i+j]=s2[j];
          }
          ans=min(ans,op+helper(temp,i,l2));
          temp=s1;
          
          
        }
        if(ans==1e9)return -1;
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends