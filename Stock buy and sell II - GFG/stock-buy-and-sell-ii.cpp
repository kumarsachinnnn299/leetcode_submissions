//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
    int helper(int idx,vector<int>&prices,bool tobuy,vector<vector<int>>&dp)
    {
        if(idx==prices.size())return 0;
       
        if(tobuy)
        {   if(dp[idx][0]!=-1)return dp[idx][0];
           
            int taken=-prices[idx]+helper(idx+1,prices,!tobuy,dp);
           
            int nottaken=helper(idx+1,prices,tobuy,dp);
            return dp[idx][0]= max(taken,nottaken);
        }
        else{if(dp[idx][1]!=-1)return dp[idx][1];
            
            int taken=prices[idx]+helper(idx+1,prices,!tobuy,dp);
            
            int nottaken=helper(idx+1,prices,tobuy,dp);
            return dp[idx][1]= max(taken,nottaken);
        }
    }
  
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return helper(0,prices,true,dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends