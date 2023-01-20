//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=s7qndqie2Es&list=PLjeQ9Mb66hM3hgJfIvc32sTRQOpZ2SXxC&index=2

bool checkprime(int n)
{
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

class Solution {
public:
    string isSumOfTwo(int N){
        // code here
        if(N%2)
        {
         if(checkprime(N-2))return "Yes";
         else return "No";
        }
        else{
            if(N==2)return "No";
            if(N==4)return "Yes";
            for(int i=1;i<N/2;i+=2)
            {
                if(checkprime(N-i))return "Yes";
            }
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends