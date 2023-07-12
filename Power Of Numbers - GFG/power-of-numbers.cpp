//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    int M=1e9+7;
    // https://www.youtube.com/watch?v=YKSlLldX-sY
    long long power(int N,int R)
    {
       //Your code here
       if(R==1)return N;
       if(R%2==0)
       {    
           long long temp=power(N,R/2)%M;
           temp=(temp*temp)%M;
           return temp;
       }
       else{
           long long temp=power(N,R/2)%M;
           temp=(temp*temp)%M;
          temp=(temp*N)%M;
           return temp;
       }
       
        
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends