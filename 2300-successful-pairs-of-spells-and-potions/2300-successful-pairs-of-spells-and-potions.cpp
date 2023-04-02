class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(auto i:spells)
        {
            long long temp=(success/i)+(success%i!=0);
            cout<<lower_bound(potions.begin(),potions.end(),temp)-potions.begin()<<endl;
            // if(upper_bound(potions.begin(),potions.end(),temp)!=potions.end())
            // {
                int idx=lower_bound(potions.begin(),potions.end(),temp)-potions.begin();
                ans.push_back(potions.size()-idx);
            // }
            // else{
            //     ans.push_back(0);
            // }
        }
        return ans;
    }
};