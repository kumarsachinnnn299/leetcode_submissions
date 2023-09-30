// https://www.youtube.com/watch?v=8nx5dxFuvLo

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3)return false;
        int n=nums.size();
       vector<int>lmin(n);
        lmin[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            lmin[i]=min(lmin[i-1],nums[i]);
        }
        
        stack<int>st;
        for(int j=n-1;j>=0;j--)
        {
            if(nums[j]>lmin[j])
            {
                while(!st.empty()&&st.top()<=lmin[j])st.pop();
                if(!st.empty()&&st.top()<nums[j])return true;
                st.push(nums[j]);
            }
        }
        return false;
           
        
    }
};