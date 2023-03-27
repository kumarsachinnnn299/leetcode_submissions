class Solution {
public:
    
    bool isvalid(long long time,vector<int>&ranks,int cars){
        long long c=0;
        
        for(auto i:ranks)
        {   if(c>=cars)return true;
            c+=floor(sqrt(time/i));
        } 
        if(c>=cars)return true;
        return false;
    }
    
    long long repairCars(vector<int>& ranks, int cars) {
         long long s=1,e=1e14;
        // long long ans=0;
        while(s<e)
        {
            long long mid=s+(e-s)/2;
            if(isvalid(mid,ranks,cars))
            {
                // ans=min(ans,mid);
                e=mid;
            }
            else s=mid+1;
        }
        return s;
    }
};