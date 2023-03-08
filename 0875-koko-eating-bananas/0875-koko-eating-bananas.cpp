class Solution {
public:
    
    //Khud kiya
    
    bool isvalid(int gspeed,vector<int>&arr,int h)
    {
        int time=0;
        for(auto i:arr)
        {
            time+=((i/gspeed)+(i%gspeed!=0));
            if(time>h)return false;
        }
        return true;
    }
    
    int minEatingSpeed(vector<int>& arr, int h) {
        sort(arr.begin(),arr.end());
        int s=1,e=*max_element(arr.begin(),arr.end());
        int ans=INT_MAX;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isvalid(mid,arr,h))
            {   ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return s;
    }
};