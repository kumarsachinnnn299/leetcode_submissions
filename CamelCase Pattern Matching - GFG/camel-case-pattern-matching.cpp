//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> arr, string Pattern) {
        // code here
        vector<string>ans;
        for(auto i:arr)
        {   string temp="";
            for(auto j:i)
            {
                if(j-'A'>=0&&j-'A'<=25){
                    temp+=j;
                    if(temp==Pattern)
                    {
                        ans.push_back(i);
                        break;
                    }
                    
                }
                
            }
        }
        if(ans.size()==0)return {"-1"};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends