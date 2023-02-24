// https://www.youtube.com/watch?v=CP7M1JrBoc8

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
   priority_queue<int>pq;
        int mine=INT_MAX;
        for(auto i:nums)
        {
            if(i%2==0)
            {
                pq.push(i);
                mine=min(mine,i);
            }
            else{
                pq.push(i*2);
                mine=min(mine,i*2);
            }
        }
        int ans=INT_MAX;
        while(!pq.empty())
        {
            int max=pq.top();
            pq.pop();
            ans=min(ans,max-mine);
            if(max%2)break;
            mine=min(mine,max/2);
            pq.push(max/2);
        }
        return ans;
    }
};