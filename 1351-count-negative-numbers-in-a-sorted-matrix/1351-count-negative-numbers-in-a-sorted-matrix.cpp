class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int c=grid[0].size();
        for(auto i:grid)
        {
            int idx=upper_bound(i.rbegin(),i.rend(),-1)-i.rbegin();
            cout<<idx<<endl;
            if(idx>0)ans+=(idx);
        }
        return ans;
    }
};