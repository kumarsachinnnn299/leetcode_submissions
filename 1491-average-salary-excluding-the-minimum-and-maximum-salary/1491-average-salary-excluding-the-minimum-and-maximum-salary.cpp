class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        int maxe=INT_MIN,mine=INT_MAX;
        for(auto i:salary)
        {
            maxe=max(maxe,i);
            mine=min(mine,i);
        }
        
        for(auto i:salary)
        {
            if(i!=maxe&&i!=mine)ans+=i;
        }
        return ans/(salary.size()-2);
    }
};