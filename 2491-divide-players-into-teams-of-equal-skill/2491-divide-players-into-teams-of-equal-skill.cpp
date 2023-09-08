class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        long long ans=0;
        sort(arr.begin(),arr.end());
        int temp=arr[0]+arr[arr.size()-1];
        for(int i=0;i<arr.size()/2;i++)
        {
            if((arr[i]+arr[arr.size()-1-i])!=temp)return -1;
            ans+=(arr[i]*arr[arr.size()-1-i]);
        }
        return ans;
    }
};