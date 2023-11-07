class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>arr;
        for(int i=0;i<dist.size();i++)
        {   int temp=dist[i]/speed[i];
         temp+=(dist[i]%speed[i]!=0);
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        for(auto i:arr)cout<<i<<' ';
        cout<<endl;
        bool charged=true;
        int ans=1;
        int time=1;
        int idx=1;
        while(idx<arr.size())
        {
            if(charged)
            {
                if(arr[idx]<=time)return ans;
                time++;
                ans++;
                charged=false;
                idx++;
            }
            else{
                charged=true;
                // time++;
               
            }
        }
        return ans;
    }
};