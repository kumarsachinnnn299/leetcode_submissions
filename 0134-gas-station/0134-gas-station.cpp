// https://www.youtube.com/watch?v=HQpDS9wuzws
// https://leetcode.com/problems/gas-station/discuss/1706142/JavaC%2B%2BPython-An-explanation-that-ever-EXISTS-till-now!!!!
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0))return -1;
        int ans=0,fuel=0;
        for(int i=0;i<gas.size();i++)
        {
            fuel=fuel+gas[i]-cost[i];
            if(fuel<0)
            {
                ans=i+1;
                fuel=0;
            }
        }
        return ans;
    }
};