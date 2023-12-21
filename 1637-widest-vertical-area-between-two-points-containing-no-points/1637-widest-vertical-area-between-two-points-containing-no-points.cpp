class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int width=0;
        int ans=0;
        for(int i=1;i<points.size();i++)
        {
            int x=points[i][0]-points[i-1][0];
            // if(x>width)
            // {
            //     width=x;
            //     int y=points[i][1]-points[i-1][1];
            //     int area=width*y;
            //     ans=max(ans,area);
            // }
            width=max(x,width);
        }
        return width;
    }
};