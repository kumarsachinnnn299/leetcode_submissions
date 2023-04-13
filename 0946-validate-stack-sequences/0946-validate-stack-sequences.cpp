class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j=0;
        stack<int>st;
        // st.push(pushed[0]);
        for(int i=0;i<pushed.size();i++)
        {       st.push(pushed[i]);
                while(!st.empty()&&st.top()==popped[j])
                {
                    j++;
                    st.pop();
                }
            
                
        }
        return st.empty();
        
        
        
    }
};