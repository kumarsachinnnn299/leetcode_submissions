class Solution {
public:
    
    int helper(int idx,string &s, vector<int>&time)
    {
        if(idx>=s.size())return 0;
        if(idx>0&&s[idx]==s[idx-1]){
            if(time[idx]<time[idx-1])
            {
                swap(time[idx-1],time[idx]);
            }
            return min(time[idx],time[idx-1])+helper(idx+1,s,time);
        }
        else{
            return helper(idx+1,s,time);
        }
    }
    
    int minCost(string s, vector<int>& time) {
        
        
        return helper(0,s,time);
        
    }
};