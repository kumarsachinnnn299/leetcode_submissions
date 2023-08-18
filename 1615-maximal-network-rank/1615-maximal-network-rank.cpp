
// https://www.youtube.com/watch?v=-bauKABZQyI

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        vector<unordered_set<int>>arr(n);
        for(auto i:roads)
        {
            arr[i[0]].insert(i[1]);
            arr[i[1]].insert(i[0]);
        }
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=arr[i].size()+arr[j].size();
                if(arr[i].find(j)!=arr[i].end())temp--;
                ans=max(ans,temp);
            }
        }
        return ans;
        
    }
};