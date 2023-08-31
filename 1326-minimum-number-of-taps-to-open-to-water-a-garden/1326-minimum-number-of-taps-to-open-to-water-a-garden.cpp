
//Greedy
// https://www.youtube.com/watch?v=Pk128gC_sdw

class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int minr=0,maxr=0,ans=0;
        while(maxr<n)
        {
            for(int i=0;i<ranges.size();i++)
            {
                if(i-ranges[i]<=minr&&i+ranges[i]>maxr)
                {
                    maxr=i+ranges[i];

                }
               
            }
            if(minr==maxr)return -1;
             ans++;
                minr=maxr;
               
        }
        
        return ans;
    }
};