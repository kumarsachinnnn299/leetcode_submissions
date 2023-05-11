//Khud kiya map use krke

//Priority que approach: https://www.youtube.com/watch?v=dT-XiXKYbDI

class Solution {
public:
    class cmp{
        public:
         bool operator()(pair<int,string>&p1, pair<int,string>&p2)
        {
            if(p1.first!=p2.first)return p1.first>p2.first;
                else return p1.second<p2.second;
        }
    };
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto i:words)mp[i]++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        
        for(auto i:mp)
        {
            if(pq.size()<k)pq.push({i.second,i.first});
            else{
                if(i.second>pq.top().first)
                {
                    pq.pop();
                    pq.push({i.second,i.first});
                }
                else if(i.second==pq.top().first&&i.first<pq.top().second)
                {
                    pq.pop();
                    pq.push({i.second,i.first});
                }
            }
        }
        vector<string>ans;

        while(!pq.empty())
        {   string s=pq.top().second;
            ans.push_back(s);
            
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};