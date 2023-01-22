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

//Not done
// https://www.youtube.com/watch?v=jggnMxQYoqU

class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        // code here
        int sum=accumulate(arr.begin(),arr.end(),0);
        vector<int>divisors;
        int m=sqrt(sum)+1;
        for(int i=1;i<m;i++)
        {
            if(sum%i==0)
            {
                divisors.push_back(i);
                divisors.push_back(sum/i);
            }
        }
        for(int i=1;i<N;i++)
        {
            arr[i]+=arr[i-1];
        }
        int  hcf=1;
        for(auto i:divisors)
        {
            int ans=0;
            for(int j=0;j<N;j++)
            {
                if(arr[j]%i==0)ans++;
            }
            if(ans>=K)
            {
                hcf=max(hcf,i);
            }
        }
        return hcf;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends