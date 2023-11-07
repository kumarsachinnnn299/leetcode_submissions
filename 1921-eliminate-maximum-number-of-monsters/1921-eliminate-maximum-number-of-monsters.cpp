
//Done
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    
        for(int i=0;i<dist.size();i++)
        {   
            dist[i]=(dist[i]/speed[i])+(dist[i]%speed[i]!=0);
        }
        sort(dist.begin(),dist.end());
      
        int ans=1;
        int time=1;
        int idx=1;
        while(idx<dist.size())
        {
            
                if(dist[idx]<=time)return ans;
                time++;
                ans++;
                
                idx++;
            
        }
        return ans;
    }
};