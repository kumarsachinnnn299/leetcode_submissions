class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long start=1,end=1e14,ans=end;
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            long long currtrips=0;
            for(int i=0;i<time.size();i++)
            {
                currtrips+=(mid/time[i]);
            }
            if(currtrips>=totalTrips)
            {   ans=min(ans,mid);
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};