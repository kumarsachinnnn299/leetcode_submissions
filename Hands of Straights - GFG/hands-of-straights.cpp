//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        sort(hand.begin(),hand.end());
        if(N%groupSize)return false;
        unordered_map<int,queue<int>>mp;
        vector<int>vis(N);
        for(int i=0;i<N;i++)
        {
            mp[hand[i]].push(i);
        }
        
        for(int i=0;i<N;i++)
        {  
            if(vis[i]!=1)
            {    int val=hand[i];
                for(int j=0;j<groupSize;j++)
                {
                    if(mp[val].size()==0)return false;
                    else {
                        int idx=mp[val].front();
                        mp[val].pop();
                        vis[idx]=1;
                    }
                    val++;
                }
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
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends