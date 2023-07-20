class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int>ans;
        stack<int>st;
        st.push(arr[0]);
        for(int i=1;i<arr.size();i++)
        {   
            st.push(arr[i]);
            while(true)
            {
                if(st.size()>=2)
                {
                    int f=st.top();
                    st.pop();
                    int s=st.top();
                    st.pop();
                    
                    if(f<0&&s>=0)
                    {
                        if(abs(f)>abs(s))st.push(f);
                            else if(abs(f)<abs(s))st.push(s);
                    }
                    else {
                        st.push(s);
                    st.push(f);
                    break;}
                   
                    
                }
                else break;
            }
             
        }
        while(st.size())
                   {
                       ans.push_back(st.top());
                       st.pop();
                   }
                   reverse(ans.begin(),ans.end());
                   return ans;
            
    }
};