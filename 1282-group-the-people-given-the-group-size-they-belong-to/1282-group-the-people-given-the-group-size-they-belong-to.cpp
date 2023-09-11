//Done by self


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        map<int,vector<int>>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto i:mp)
        {
            vector<int>temp;
            int s=i.first;
            // cout<<i.first<<" -> ";
            for(auto j:i.second)
            {
                temp.push_back(j);
                if(temp.size()==s){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
            
            
           
        }
         return ans;
    
    }
};