//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

//Adtiya verma recursion playlist

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    void helper(int n,int s,int d,int h,long long&ans)
    {
        if(n==1)
        {
          
            cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
            return;
        }
        helper(n-1,s,h,d,ans);
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        ans++;
        helper(n-1,h,d,s,ans);
        ans++;
        // cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long ans=1;
         helper(N,from,to,aux,ans);
         return ans;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends