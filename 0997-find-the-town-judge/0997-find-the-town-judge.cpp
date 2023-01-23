class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // int temp=(n*(n+1))/2;
        // for(auto i:trust)
        // {
        //     temp-=i[0];
        // }
        // if(temp==0)return -1;
        // return temp;
        if(n==1)return 1;
        map<int,set<int>>mp_trustedby,mp_trust_on;
        for(auto i:trust)
        {
            mp_trustedby[i[1]].insert(i[0]);
            mp_trust_on[i[0]].insert(i[1]);
        }
        
         for(auto i:mp_trustedby)
        {
          auto temp=i.second;
             if(temp.size()==n-1&&mp_trust_on[i.first].size()==0)return i.first;
                 
        }
        
        return -1;
    }
};