// https://leetcode.com/problems/smallest-sufficient-team/discuss/3771569/C%2B%2B-or-Faster-than-90or-Long-Explanation-or-2-D-DP-%2B-BITMASK-or-Clean-Code-or


class Solution {
public:
    vector<int>res;

void helper(int i,vector<int>&people_skill,int m,int mask,vector<int>&ans,vector<vector<int>>&dp)
{
  if(i == people_skill.size()) //Base Case
  {
    if(mask == ((1<<m)-1)) //Check for all req_skills included
    {
      if(res.size() == 0 || (ans.size() < res.size())) res = ans; //better ans then update
    }
    return;
  }

  if(dp[i][mask] != -1) //Memoization Part
  {
    if(dp[i][mask] <= ans.size()) return;
  }

  helper(i+1,people_skill,m,mask,ans,dp); //Non-Pick / Ignore Case

  ans.push_back(i); // Pick Case

  helper(i+1,people_skill,m,(mask|people_skill[i]),ans,dp); //Next Call

  ans.pop_back(); //Undo the change in Pick

  if(ans.size() > 0) dp[i][mask] = ans.size(); //if found and answer then update DP
}
    
    
    vector<int> smallestSufficientTeam(vector<string>& rskills, vector<vector<string>>& people) {
        unordered_map<string,int>mp;
        for(int i=0;i<rskills.size();i++)
        {
            mp[rskills[i]]=(1<<i);
        }
        
        vector<int>ans;
        vector<int>skillmask;
        
        for(auto i:people)
        {   int mask=0;
            for(auto j:i)
            {
                if(mp.find(j)!=mp.end())
                {
                    mask|=mp[j];   
                }
            }
         skillmask.push_back(mask);
            
        }
        vector<vector<int>>dp(people.size(),vector<int>((1<<rskills.size()),-1));
        helper(0,skillmask,rskills.size(),0,ans,dp);
        return res;
    }
};