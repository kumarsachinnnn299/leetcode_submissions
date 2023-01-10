class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        
        for(auto i:tasks)
        {
            mp[i]++;
        }
        int ans=0;
        cout<<"60: "<<mp[60]<<endl;
        cout<<"61: "<<mp[61]<<endl;
        cout<<"62: "<<mp[62]<<endl;
        cout<<"63: "<<mp[63]<<endl;
        cout<<"64: "<<mp[64]<<endl;
        cout<<"66: "<<mp[65]<<endl;
        cout<<"66: "<<mp[66]<<endl;
        cout<<"67: "<<mp[67]<<endl;
        cout<<"68: "<<mp[68]<<endl;
         cout<<"69: "<<mp[69]<<endl;
        for(auto i:mp)
        {   int temp=i.second;
           if(temp==1)return -1;
         else if(temp%3==0)ans+=(temp/3);
            else 
            {
                ans+=((temp/3)+1);
            }
         
        }
        return ans;
        
    }
};