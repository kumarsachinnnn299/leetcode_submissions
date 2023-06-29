//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

//https://www.youtube.com/watch?v=wuYM12cIErM

class Solution{
public:
    
    bool helper(int N)
    {
        if(N<10)
        {
            if(N==1||N==7)return true;
            return false;
        }
        
        int sum=0,x=N;
        while(x)
        {
            sum+=pow(x%10,2);
            x/=10;
        }
        return helper(sum);
    }

    int nextHappy(int N){
        // code here
        N++;
        while(true)
        {
            if(helper(N))return N;
            N++;
            
        }
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends