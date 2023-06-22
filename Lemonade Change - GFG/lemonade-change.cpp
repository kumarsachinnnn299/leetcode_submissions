//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &arr) {
        // code here
        int cf=0,cten=0,ctwenty=0;
        if(arr[0]==10||arr[0]==20)return false;
        for(auto i:arr)
        {
            if(i==5)cf++;
            else if(i==10)
            {
                if(cf==0)return false;
                cf--;
                cten++;
            }
            else{
               if(cf>0&&cten>0)
               {
                   cf--;
                   cten--;
               }
               else if(cten==0&&cf>=3)cf-=3;
               else return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends