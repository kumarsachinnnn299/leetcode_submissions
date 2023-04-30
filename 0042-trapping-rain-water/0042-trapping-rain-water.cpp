// https://www.youtube.com/watch?v=FbGG2qpNp4U
//Aditya verma//Just find max height on left and right at current idx and find their minimum


class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>maxl(n),maxr(n);
        maxl[0]=height[0];
        maxr[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            maxl[i]=max(height[i],maxl[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            maxr[i]=max(height[i],maxr[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(maxl[i],maxr[i])-height[i];
        }
        return ans;
    }
    
};