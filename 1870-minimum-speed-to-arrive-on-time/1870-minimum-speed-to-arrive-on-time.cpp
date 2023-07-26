//Max value 10^7 ho skti h given h last m 

class Solution {
public:
    

    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1,e=1e8;
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            double temp=0;
             for(int i=0;i<dist.size();i++)
            {
                if(i==dist.size()-1)
                {temp+=((double)(dist[i])/(double)(mid));
                }
                else {
                    temp+=(dist[i]/mid)+(dist[i]%mid!=0);

                }

            }
            if(temp<=hour)
            {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};