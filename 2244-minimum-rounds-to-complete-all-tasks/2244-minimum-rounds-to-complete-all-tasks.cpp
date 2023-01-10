class Solution {
public:
    
    // Easy question
    // https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/discuss/2995189/Easiest-C%2B%2B-solution-with-detailed-explanation
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        
        for(auto i:tasks)
        {
            mp[i]++;
        }
        int ans=0;
        
        for(auto i:mp)
        {   int temp=i.second;
           if(temp==1)return -1;
         else if(temp%3==0)ans+=(temp/3);
            else 
            {
                ans+=((temp/3)+1);
            }
         
        }
        return ans;
        
    }
};