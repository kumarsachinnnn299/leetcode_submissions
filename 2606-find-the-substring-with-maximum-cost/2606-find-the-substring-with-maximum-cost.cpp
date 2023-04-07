//Khud kiya

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int>arr(26,-1111);
        for(int i=0;i<chars.size();i++)
        {
            arr[chars[i]-'a']=vals[i];
        }
        vector<int>arr2;
        for(auto i:s)
        {
            if(arr[i-'a']!=-1111)arr2.push_back(arr[i-'a']);
            else arr2.push_back(i-'a'+1);
        }
        for(auto i:arr2)cout<<i<<' ';
        int currsum=0,ans=INT_MIN;
        for(auto i:arr2)
        {
            currsum+=i;
            if(currsum>ans)ans=currsum;
            if(currsum<0){
                currsum=0;
            // ans=0;
            }
        }
        if(ans<0)ans=0;
        return ans;
    }
};