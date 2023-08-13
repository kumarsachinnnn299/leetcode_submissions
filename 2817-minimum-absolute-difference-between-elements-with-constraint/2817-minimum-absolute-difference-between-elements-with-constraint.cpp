class Solution {
public:
    
    // https://www.youtube.com/watch?v=SgdZpictk-o
    
    int minAbsoluteDifference(vector<int>& nums, int x) {
    
        set<int>st;
        int ans=INT_MAX;
        for(int i=x;i<nums.size();i++)
        {
           
                st.insert(nums[i-x]);
                auto it=st.lower_bound(nums[i]);
            if(it!=st.end())
            {
                int val=*it;
                int dif=abs(nums[i]-val);
                ans=min(ans,dif);

                if(it!=st.begin()){
                it--;
                    val=*it;
                  dif=abs(nums[i]-val);
                ans=min(ans,dif);}
            }
            else{
                if(it==st.begin())continue;
                it--;
                int val=*it;
                int dif=abs(nums[i]-val);
                ans=min(ans,dif);
            }
            
        }
        
        
        
        return ans;
    }
};