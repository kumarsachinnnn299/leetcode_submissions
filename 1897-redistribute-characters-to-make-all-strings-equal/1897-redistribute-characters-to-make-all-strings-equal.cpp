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
        
        int gcd=-1;
        for(auto i:arr){
            if(i)
            {
                if(gcd!=-1)gcd=__gcd(gcd,i);
                else gcd=i;
            }
        }
        
        return gcd%n==0;
    }
};