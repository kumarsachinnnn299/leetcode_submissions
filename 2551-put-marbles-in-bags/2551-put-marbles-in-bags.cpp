// https://leetcode.com/problems/put-marbles-in-bags/discuss/3734206/C%2B%2B-Greedy-ApproachExplaination-with-examples


class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<long long>sum;
        for(int i=0;i<weights.size()-1;i++)
        {
            sum.push_back(weights[i]+weights[i+1]);
        }
        long long min=0,max=0;
        sort(sum.begin(),sum.end());
        for(int i=0;i<k-1;i++)
        {
            min+=sum[i];
        }
        for(int i=0;i<k-1;i++)
        {
            max+=sum[sum.size()-i-1];
        }
        return max-min;
    }
};