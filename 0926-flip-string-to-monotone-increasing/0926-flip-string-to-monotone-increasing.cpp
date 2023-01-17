class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int count1=0,flip=0;
        for(auto i:s)
        {
            if(i=='1')count1++;
            else{
                flip++;
            }
            flip=min(flip,count1);
        }
        return min(count1,flip);
    }
};