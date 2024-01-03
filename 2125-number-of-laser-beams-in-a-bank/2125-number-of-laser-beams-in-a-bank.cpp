class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>arr;
        for(auto i:bank)
        {   int c=0;
            for(auto j:i)
            {
                if(j=='1')c++;
            }
         if(c)arr.push_back(c);
        }
        if(arr.size()==1)return 0;
        int ans=0;
            for(int i=1;i<arr.size();i++)
            {
                ans+=(arr[i]*arr[i-1]);
            }
        return ans;
    }
};