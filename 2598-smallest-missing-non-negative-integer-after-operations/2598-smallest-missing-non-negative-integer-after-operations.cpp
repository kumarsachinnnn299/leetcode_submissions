class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        map<int,int>mp;
        for(int  i=0;i<nums.size();i++)
        {
            int temp=nums[i]%value;
            if(temp<0)temp+=value;
            mp[temp]++;
        }
        int c=0;
        while(1){
            if(mp[c]==0)return c;
            int cnt=mp[c];
            int k=0;
            while(cnt--)
            {
                mp[c+(k*value)]++;
                k++;
                
            }
            c++;
        }
        return -1;
    }
};