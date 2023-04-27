class Solution {
public:
    bool isBoomerang(vector<vector<int>>& arr) {
        int x1=arr[0][0],x2=arr[1][0],x3=arr[2][0],y1=arr[0][1],y2=arr[1][1],y3=arr[2][1];
        
        return ((x1-x2)*(y2-y3))!=((y1-y2)*(x2-x3));
        
        
    }
};