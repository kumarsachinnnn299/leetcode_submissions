// https://www.youtube.com/watch?v=eny6bOqxeqE

class Solution {
public:
    string predictPartyVictory(string senate) {
    
        queue<int>rad,dire;
        int n=senate.size();
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')rad.push(i);
            else dire.push(i);
            
        }
        while(!rad.empty()&&!dire.empty())
        {
            if(rad.front()<dire.front())
            {
                dire.pop();
                rad.push(rad.front()+n);
                rad.pop();
                
            }
            else{
                rad.pop();
                dire.push(dire.front()+n);
                dire.pop();
            }
        }
        if(dire.size())return "Dire";
        return "Radiant";
    }
    
};