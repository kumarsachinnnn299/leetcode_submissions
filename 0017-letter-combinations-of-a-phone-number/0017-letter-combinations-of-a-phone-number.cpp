class Solution
{
public:
  vector<string> letterCombinations(string s)
  {
    if (s.size() == 0)
      return {};
    vector<string> ans;
    unordered_map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";

   
      string temp = mp[s[0]];
      if (s.size() > 1)
      {
        string temp2 = mp[s[1]];

        if (s.size() > 2)
        {
          string temp3 = mp[s[2]];

          if (s.size() > 3)
          {
            string temp4 = mp[s[3]];
            for(auto m:temp)
           { for (auto j : temp2)
            {
              for (auto k : temp3)
              {
                for (auto l : temp4)
                {
                  string f = "";
                  f += m;
                  f+=j;
                  f+=k;
                  f+=l;
                  ans.push_back(f);
                }
              }
            }}
          }

          else
          {
            for(auto l:temp)
            {for (auto j : temp2)
            {
              for (auto k : temp3)
              {
               string t="";
               t+=l;
               t+=j;
               t+=k;
                ans.push_back(t);
              }
            }}
          }
        }

        else
        {

          for (auto j : temp)
          {
            for(auto k:temp2)
            { string f="";
              f+=j;
              f+=k;
              ans.push_back(f);
            }
          }
        }
      }

      else
      {

        for (auto j : temp)
        {
          string t = "";
          t += j;
          ans.push_back(t);
        }
      }
    
    return ans;
  }
};