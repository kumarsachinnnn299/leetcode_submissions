class Solution {
public:
    bool detectCapitalUse(string word) {
        int small=0,capital=0;
        
            for(auto i:word)
            {
                if(i<97)capital++;
                else small++;
            }
        if((capital==word.size()&&small==0)||(small==word.size()&&capital==0)||(word[0]<97&&small==word.size()-1&&capital==1))return true;
        return false;
        
        
        
    }
};