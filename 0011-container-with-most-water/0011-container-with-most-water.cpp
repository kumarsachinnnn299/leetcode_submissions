
// https://www.youtube.com/watch?v=ZHQg07n_tbg

/*

iski approach ye h ki two poianters lenge 1 start pe and 1 end pe and area nikalte rhenge or jo jis pointer pe height min hogi usi ko move krege either left or right

see video to understand

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        long long s=0,e=height.size()-1;
        long long ans=0;
        while(s<e)
        {   int temph=min(height[s],height[e]);
            ans=max(ans,(e-s)*temph);
            if(height[s]<height[e])s++;
            else e--;
        }
        return ans;
    }
};