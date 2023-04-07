//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        st.push(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            if(st.empty())st.push(arr[i]);
            
            else{
                int temp= st.top();
                if((arr[i]>=0&&temp>=0)||(arr[i]<0&&temp<0))st.push(arr[i]);
                else st.pop();
            }
        }
        if(st.empty())return {};
        vector<int>ans(st.size());
      int i=ans.size()-1;
        
        while(!st.empty())
        {
            // cout<<st.top()<<endl;
            ans[i--]=st.top();
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends