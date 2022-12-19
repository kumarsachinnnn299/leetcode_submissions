//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],long long int N, long long int k) {

    queue<long long int>list;
    int i=0,j=0;
    vector<long long>ans;
    while(j<N)
    {
        if(arr[j]<0)list.push(arr[j]);
        if(j-i+1<k)j++;
        else{
            if(list.size()!=0)
            {
                ans.push_back(list.front());
                if(arr[i]==list.front())list.pop();
            }
            else ans.push_back(0);
            
            i++;
            j++;
        }
    }
    return ans;
                                                 
 }