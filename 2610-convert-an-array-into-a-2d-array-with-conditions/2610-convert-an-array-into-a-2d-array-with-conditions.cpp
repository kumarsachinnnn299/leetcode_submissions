class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        while(true)
        {   vector<int>temp;
            bool flag=true;
            // for(auto i:mp)cout<<i.first<<' '<<i.second<<endl;
            for(auto i:mp)
            {   
                if(i.second)
                {temp.push_back(i.first);
                
                 mp[i.first]--;
                 flag=false;
              
                }
            }
         if(flag)break;
         ans.push_back(temp);
         // if(mp.size()==0)break;
        }
        return ans;
            
    }
};