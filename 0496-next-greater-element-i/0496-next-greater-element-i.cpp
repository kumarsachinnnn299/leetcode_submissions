class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                mp[nums2[i]]=-1;
            }
            
            while(!st.empty()&&st.top()<=nums2[i])st.pop();
            if(!st.empty())mp[nums2[i]]=st.top();
            else mp[nums2[i]]=-1;
            
            st.push(nums2[i]);
        }
        for(auto i:nums1)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};