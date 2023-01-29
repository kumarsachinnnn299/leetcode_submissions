//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=EXp7PpkCU24

class Solution {
  public:
    int solve(int a, int b) {
        // code here
        if(a==b)return 0;
        else if((a&b)==a||(a&b)==b)return 1;
        else return 2;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.solve(a, b);
        
        printf("%d\n", res);
        
    }
}

// } Driver Code Ends