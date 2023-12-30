class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        if(n==1)return true;
        vector<int>arr(26);
        for(auto i:words)
        {
            for(auto j:i)arr[j-'a']++;
        }
        
       
        
        // for(auto i:arr)cout<<i<<' ';
        cout<<endl;
        int gcd=-1;
        for(auto i:arr){
            if(i)
            {
                if(gcd!=-1)gcd=__gcd(gcd,i);
                else gcd=i;
            }
        }
        
        // cout<<gcd<<endl;
        
        return gcd%n==0;
    }
};