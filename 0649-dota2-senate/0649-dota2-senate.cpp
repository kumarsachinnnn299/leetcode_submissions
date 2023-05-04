// https://www.youtube.com/watch?v=eny6bOqxeqE

class Solution {
public:
    string predictPartyVictory(string senate) {
        
    int cr=0,cd=0;
        for(int  i=0;i<senate.size();i++)
        {
            if(senate[i]=='R')cr++;
            else cd++;
            
        }
        int i=0,n=senate.size();
        while(cr&&cd)
        {
            if(senate[i]!='@')
            {
                if(senate[i]=='R')
                {
                    
                    int temp=(i+1)%n;
                    while(true)
                    {
                        if(senate[temp]=='D'){
                            senate[temp]='@';
                            cd--;
                            break;
                        }
                        temp++;
                        temp%=n;
                    }
                }
                else{
                    int temp=(i+1)%n;
                    while(true)
                    {
                        if(senate[temp]=='R'){
                            senate[temp]='@';
                            cr--;
                            break;
                        }
                        temp++;
                        temp%=n;
                    }
                }
            }
            
                i++;
                i%=n;
            
          
        }
        if(cr)return "Radiant";
        return "Dire";
    }
    
};