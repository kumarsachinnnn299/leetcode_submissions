// https://www.youtube.com/watch?v=K0NgGYEAkA4
//Deque se hoga

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=INT_MAX;
        deque<pair<long long,long long>>dq;
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum>=k)
            {
                ans=min(ans,i+1);
            }
            pair<long long,long long>curr={INT_MIN,INT_MIN};
            while(!dq.empty()&&(sum-dq.front().second>=k))
            {
                curr=dq.front();
                dq.pop_front();
            }
            if(curr.second!=INT_MIN)
            {
                ans=min(ans,i-curr.first);
            }
            while(!dq.empty()&&(sum<=dq.back().second))
            {
                dq.pop_back();
                
            }
            dq.push_back({i,sum});
        }
        return ans==INT_MAX?-1:ans;
        
    }
};