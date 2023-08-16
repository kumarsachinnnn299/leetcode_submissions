class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0,r=k-1,n=nums.size();
        unordered_map<int,int>mp;
        priority_queue<int>pq;
        int c=0;
        vector<int>ans(n-k+1);
        for(int i=l;i<=r;i++)
        {
            pq.push(nums[i]);
            mp[nums[i]]++;
        }
        
        while(r<n)
        {   while(mp[pq.top()]==0)pq.pop();
            ans[c++]=pq.top();
            if(nums[l]==pq.top())pq.pop();
         mp[nums[l]]--;
            l++;
            r++;
            if(r<n){
                pq.push(nums[r]);
            mp[nums[r]]++;}
        }
        
        return ans;

    };
};