//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=FOm3yugop4I
//Not understood
class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(),range.end());
        vector<int>ans(q);
        for(int i=0;i<q;i++){
        int pos=1,curr=range[0][0];
        for(int j=0;j<n;j++)
        {
            int need=queries[i]-pos;
            if(need&&range[j][0]>curr)
            {
                --need;
                ++pos;
                curr=range[j][0];
                
            }
            int cango=range[j][1]-curr;
            int change=min(cango,need);
            change=max(0,change);
            pos+=change;
            curr+=change;
        }
        if(pos==queries[i])ans[i]=curr;
        else ans[i]=-1;
        
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends