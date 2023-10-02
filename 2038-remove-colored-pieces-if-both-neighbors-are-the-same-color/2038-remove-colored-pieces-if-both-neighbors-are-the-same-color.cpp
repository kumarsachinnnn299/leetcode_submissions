//https://www.youtube.com/watch?v=95j4yW6DBtw
//Easy approach

class Solution {
public:
    bool winnerOfGame(string s) {
        
        int ca=0,cb=0;
         int sA=0,sB=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {   if(sB>2)cb+=(sB-2);
                sB=0;
                sA++;
            }
            else{
                if(sA>2)ca+=(sA-2);
                sA=0;
                sB++;
            }
        }
        
        if(sA&&sA>2)ca+=(sA-2);
        if(sB&&sB>2)cb+=(sB-2);

        if(ca>cb)return true;
            return false;
        
    }
};