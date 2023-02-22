// https://www.youtube.com/watch?v=CoDBIX5TCow

class Solution {
public:
    
    bool isvalid(vector<int>&weights,int capacity,int d)
    {
        int currsum=0,days=1;
        for(int i=0;i<weights.size();i++)
        {
            if((currsum+weights[i])>capacity)
            {
                currsum=0;
                days++;
            }
             currsum+=weights[i];
        }
        return days<=d;
        
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int minwt=*max_element(weights.begin(),weights.end());
        
        int maxwt=accumulate(weights.begin(),weights.end(),0);
        int ans;
        cout<<minwt<<' '<<maxwt;
        while(minwt<=maxwt)
        {
             int mid=minwt+(maxwt-minwt)/2;
            if(isvalid(weights,mid,days))
            {   ans=mid;
                maxwt=mid-1;
            }
            else minwt=mid+1;
        }
        return ans;
    }
};