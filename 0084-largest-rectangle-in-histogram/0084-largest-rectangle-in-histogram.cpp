//Stack question
//based on next smaller element and orevious smaller element
// https://www.youtube.com/watch?v=vhUxKxiconE
class Solution {
public:
    
    vector<int> next_or_prev_smaller(vector<int>&heights,bool prev)
    {   vector<int>res;
        stack<int>st;
        if(prev)
        {
            for(int i=0;i<heights.size();i++)
            {
                // if(st.empty())st.push(-1);
                while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
                if(st.empty())res.push_back(-1);
                else res.push_back(st.top());
                st.push(i);
            }
        }
        else{
            for(int i=heights.size()-1;i>=0;i--)
            {
                while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
                if(st.empty())res.push_back(heights.size());
                else res.push_back(st.top());
                st.push(i);
            }
        }
     
     if(!prev)reverse(res.begin(),res.end());
     return res;
    }
        
    
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next_smaller(n),prev_smaller(n);
        next_smaller=next_or_prev_smaller(heights,false);
         prev_smaller=next_or_prev_smaller(heights,true);
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,heights[i]*(next_smaller[i]-prev_smaller[i]-1));
        }
        return ans;
        
    }
};