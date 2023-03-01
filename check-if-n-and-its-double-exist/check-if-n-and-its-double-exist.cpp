class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>mp;
        for(auto i:arr)mp[i]++;
        for(auto i:arr)
        {
           if(mp[2*i]>=1||(i%2==0&&mp[i/2]>=1)){
               if(i!=0)return true;
               else{
                   return mp[i]>1;
               }
           }
        }
        return false;
    }
};