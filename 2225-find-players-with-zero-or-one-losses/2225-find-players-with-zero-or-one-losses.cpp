class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mpw,mpl;
        for(auto i:matches)
        {
            mpw[i[0]]++;
            mpl[i[1]]++;
            
        }
        vector<vector<int>>ans;
        vector<int>ar0,ar1;
        for(auto i:mpw)
        {
            if(mpl.find(i.first)==mpl.end())
            {
                ar0.push_back(i.first);
            }
            
        }
        for(auto i:mpl)
        {
            if(i.second==1)ar1.push_back(i.first);
        }
        return {ar0,ar1};
        
    }
};