class Solution {
public:
    
   
    
    int numRescueBoats(vector<int>& people, int limit) {
        int s=0,e=people.size()-1;
        int ans=0;
        sort(people.begin(),people.end());
        while(s<e)
        {
            if(people[e]+people[s]<=limit)
            {
                ans++;
                s++;
                e--;
            }
            else{
                ans++;
                e--;
            }
        }
        if(s==e)ans++;
        
        
        return ans;
    }
};