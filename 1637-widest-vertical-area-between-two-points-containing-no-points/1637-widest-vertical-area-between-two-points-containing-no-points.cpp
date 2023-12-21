//Simple bas max x axis difference between two points nikalna h

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=0;
        for(int i=1;i<points.size();i++)
        {
            int x=points[i][0]-points[i-1][0];
            ans=max(x,ans);
        }
        return ans;
    }
};