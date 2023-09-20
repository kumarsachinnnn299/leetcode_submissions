//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//https://www.youtube.com/watch?v=Y1AZWsVOvWk
//ND

class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d%=16;
            int t1=n,t2=n;
            int mul=pow(2,16);
            mul--;
            t1=((t1<<d)|(t1>>(16-d)))&mul;
            t2=((t2>>d)|(t2<<(16-d)))&mul;
            return {t1,t2};
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends