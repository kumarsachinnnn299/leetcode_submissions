class Solution {
public:
    
    bool isvalid(int mid,double hour,vector<int>&dist)
    {   double temp=0;
        for(int i=0;i<dist.size();i++)
        {
            if(i==dist.size()-1)
            {temp+=((double)(dist[i])/(double)(mid));
            }
            else {
                temp+=(dist[i]/mid)+(dist[i]%mid!=0);
                
            }
            
            
        }
     return (temp<=hour);
     
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1,e=1e7;
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isvalid(mid,hour,dist)){
                ans=mid;
                e=mid-1;
            }
            else 
            {
                s=mid+1;
            }
        }
        return ans;
    }
};