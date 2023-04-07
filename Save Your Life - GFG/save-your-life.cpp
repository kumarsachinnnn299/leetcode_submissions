//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//similar :     https://leetcode.com/problems/find-the-substring-with-maximum-cost/ 
//ye lc wala khud kiya

//GFG wale k liye thoda sa reference liya sab krr hi liya tha

//https://www.youtube.com/watch?v=GYGd5ujhfrc

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here   
          
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
           mp[x[i]]=b[i];
        }
        
      
        
       
  
        int currsum=0,mx=INT_MIN;
        string result,temp="";
        for(int  i=0;i<w.size();i++)
        {   
            
            int val;
            if(mp.find(w[i])!=mp.end())val=mp[w[i]];
            else val=int(w[i]);
            
            currsum+=val;
            temp+=w[i];
            if(currsum>mx){
                mx=currsum;
                result=temp;
                
            }
            if(currsum<0){
                currsum=0;
                temp="";
            }
        }
        // return "";
        return result;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends