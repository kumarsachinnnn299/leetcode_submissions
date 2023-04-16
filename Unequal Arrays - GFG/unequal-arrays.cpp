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

// https://www.youtube.com/watch?v=8uOLcnmhl2E
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        vector<int>ae,ao,be,bo;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=(A[i]-B[i]);
            if(A[i]%2)ao.push_back(A[i]);
            else ae.push_back(A[i]);
            if(B[i]%2)bo.push_back(B[i]);
            else be.push_back(B[i]);
        }
        if(sum!=0||ae.size()!=be.size())return -1;
        long long ans=0;
        for(int i=0;i<ae.size();i++)ans+=abs(ae[i]-be[i])/2;
        for(int i=0;i<ao.size();i++)ans+=abs(ao[i]-bo[i])/2;
        return ans/2;
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
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends