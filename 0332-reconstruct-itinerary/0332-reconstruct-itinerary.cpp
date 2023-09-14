// https://www.youtube.com/watch?v=WYqsg5dziaQ

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& arr) {
     
        unordered_map<string,multiset<string>>mp;
        int n=arr.size();
        stack<string>st;
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            mp[arr[i][0]].insert(arr[i][1]);
        }
               st.push("JFK");
               while(!st.empty())
               {
                   auto src=st.top();
                 
                   auto temp=mp[src];
                   if(temp.size()==0){
                       ans.push_back(src);
                   st.pop();
                   }
                   else{
                       st.push(*temp.begin());
                       mp[src].erase(mp[src].begin());
                       
                       
                   }
               }
        reverse(ans.begin(),ans.end());
               return ans;
        
    }
};