//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    int longestKSubstr(string s, int k) {
    // your code here
        int n = s.length();
    int left = 0,right = 0;
    map<char,int> hashmap;
    int count = 0;
    int mx = -1;
    while(right < n)
    {
        if (hashmap[s[right]] >= 1){
            hashmap[s[right]]++;
        }
        if (hashmap[s[right]] < 1){
            hashmap[s[right]] = 1;
            count++;
        
            while(count > k && left <= right){
                if (hashmap[s[left]] == 1){
                    count--;
                
                }
                hashmap[s[left]]--;
                left++;
                
            }
           
            
        }
        if (count == k) {
            mx = max(mx,(right-left)+1);
        }
        
        right++;
    }
    return mx;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends