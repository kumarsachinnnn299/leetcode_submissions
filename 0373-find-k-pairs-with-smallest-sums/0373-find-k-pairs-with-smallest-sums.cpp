// https://www.youtube.com/watch?v=VH2_mnQHK6g
//Priority queue question

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue <pair<int,pair<int,int>>>pq;
         vector<vector<int>>ans;
        for(auto i:nums1)
        {
            for(auto j:nums2)
            {
                int sum=i+j;
                if(pq.size()<k)pq.push({sum,{i,j}});
                else if(sum<pq.top().first)
                {
                    pq.pop();
                    pq.push({sum,{i,j}});
                }
                else break;
            }
        }
        int i=0;
        while(!pq.empty())
        {   ans.push_back({pq.top().second.first,pq.top().second.second});
         pq.pop();
        }
        return ans;
    }
};