class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int>ans;
        stack<int>st;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(st.empty())ans.push_back(0);
            else if(nums[st.top()]>nums[i])ans.push_back(1);
            else{
                
                while(!st.empty()&&nums[st.top()]<=nums[i])
                {
                    st.pop();
                }
                if(st.empty())ans.push_back(0);
                else ans.push_back(st.top()-i);
            }
            
            
            
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};