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
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int>left(N),right(N),ans(N);
        set<int>st;
        st.insert(A[0]);
        for(int i=1;i<N;i++)
        {
            left[i]=st.size();
            st.insert(A[i]);
        }
        st.clear();
        st.insert(A[N-1]);
        for(int i=N-2;i>=0;i--)
        {
            right[i]=st.size();
            st.insert(A[i]);
        }
        
        // for(auto i:left)cout<<i<<' ';
        // cout<<endl;
        // for(auto i:right)cout<<i<<' ';
        for(int i=0;i<N;i++)
        {
            ans[i]=left[i]-right[i];
        }
        
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
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends