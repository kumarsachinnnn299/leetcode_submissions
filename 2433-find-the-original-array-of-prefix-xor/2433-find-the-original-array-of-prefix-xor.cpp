// https://www.youtube.com/watch?v=ZCPKfpSDMRw&t=19s

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>ans(n);
        ans[0]=pref[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=pref[i-1]^pref[i];
        }
        return ans;
        
    }
};