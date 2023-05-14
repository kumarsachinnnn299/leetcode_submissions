//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
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

//Standard dp question
//Not hard
//https://www.youtube.com/watch?v=mz3qWjEUmow

class Solution {

  public:
    long long helper(vector<int>&A,int cidx,int mandatory, vector<vector<long long>>&dp)
    {
        if(cidx>=A.size())return 0;
        if(dp[cidx][mandatory]!=-1)return dp[cidx][mandatory];
        long long taken=INT_MIN,nottaken=INT_MIN;
        if(mandatory==0)
        {    nottaken=helper(A,cidx+1,1,dp);
          
        }
       
             taken=A[cidx]+helper(A,cidx+1,0,dp);
            
            
            return dp[cidx][mandatory]=max(taken,nottaken);
        
    }
    
  
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        vector<vector<long long>>dp(N,vector<long long>(2,-1));
        long long ans=helper(A,0,0,dp);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends