class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        int maxe=*max_element(arr.begin(),arr.end());
        vector<bool>ans(arr.size());
        for(int i=0;i<arr.size();i++)
        {
            if((arr[i]+k)>=maxe)ans[i]=true;
        }
        return ans;
    }
};