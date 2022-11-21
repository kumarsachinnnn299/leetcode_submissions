// https://www.youtube.com/watch?v=32Ll35mhWg0&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=1,e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int temp=0;
            for(auto i:nums){
                if(i<=mid)temp++;
            }
            if(temp<=mid)s=mid+1;
            else e=mid-1;
        }
        return s;
    }
};