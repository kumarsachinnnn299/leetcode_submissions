//Used hint

class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>s,e;
        for(auto i:flowers)
        {
            s.push_back(i[0]);
            e.push_back(i[1]);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        vector<int> ans;
        for(auto i:people)
        {   
            int blooms=upper_bound(s.begin(),s.end(),i)-s.begin();
            int bloome=(upper_bound(e.begin(),e.end(),i-1)-e.begin());
               // cout<<blooms<<' '<<bloome<<endl;
            ans.push_back(blooms-bloome);
        }
        return ans;
        
    }
};