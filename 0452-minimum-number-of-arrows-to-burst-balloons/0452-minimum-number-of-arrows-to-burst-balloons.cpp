
// bool cmp(vector<int>&a,vector<int>&b){return a[1]<b[1];}

// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/discuss/1686627/C%2B%2BJavaPython-6-Lines-oror-Sort-and-Greedy-oror-Image-Explanation

// easy to understand

class Solution {
public:
    
    
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){return a[1]<b[1];});
        int ans=1,arrowpos=points[0][1];
        for(int i=1;i<points.size();i++)
        {if(points[i][0]>arrowpos){
            ans++;
            arrowpos=points[i][1];
        }
         
        }
         return ans;  
    }
};