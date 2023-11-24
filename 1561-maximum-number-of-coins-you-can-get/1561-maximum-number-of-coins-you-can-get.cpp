class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans=0;
        int s=0,e=piles.size()-2;
        while(s<e)
        {
            ans+=piles[e];
            e-=2;
            s++;
        }
        return ans;
    }
};